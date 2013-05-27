/*
 *  Copyright (C) 1997-2013 JDE Developers TeamkinectViewer.camRGB
 *
 *  This program is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation, either version 3 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program.  If not, see http://www.gnu.org/licenses/.
 *
 *  Author : Jose María Cañas <jmplaza@gsyc.es>
			Francisco Miguel Rivas Montero <franciscomiguel.rivas@urjc.es>

 */

#include "cameraClient.h"


namespace jderobot {

cameraClient::cameraClient(Ice::CommunicatorPtr ic, std::string prefix) {
	// TODO Auto-generated constructor stubcameraClient* client = new cameraClient;
	Ice::PropertiesPtr prop;
	prop = ic->getProperties();
	Ice::ObjectPrx baseCamera;


	int fps=prop->getPropertyAsIntWithDefault(prefix+"Fps",10);
	this->cycle=(float)(1/(float)fps)*1000000;
	try{
		baseCamera = ic->propertyToProxy(prefix+"Proxy");
		if (0==baseCamera){
			throw "kinectViewer: Could not create proxy with Camera";
		}
		else {
			this->prx= jderobot::CameraPrx::checkedCast(baseCamera);
			if (0==this->prx)
				throw "Invalid " + prefix + ".Proxy";
		}
	}catch (const Ice::Exception& ex) {
		std::cerr << ex << std::endl;
	}
	catch (const char* msg) {
		std::cerr << msg << std::endl;
		std::cout << "kinectViewer: Not camera provided" << std::endl;
	}
}

cameraClient::~cameraClient() {
	// TODO Auto-generated destructor stub
}

void
cameraClient::run(){
	jderobot::ImageDataPtr dataPtr;
	colorspaces::Image::FormatPtr fmt;
	struct timeval post;
	long long int totalpre=0;
	long long int totalpost=0;
	while (this->isAlive()){
		gettimeofday(&post,NULL);
		totalpost=post.tv_sec*1000000+post.tv_usec;

		dataPtr = this->prx->getImageData();
		fmt = colorspaces::Image::Format::searchFormat(dataPtr->description->format);
		if (!fmt)
			throw "Format not supported";
		colorspaces::Image imageRGB(dataPtr->description->width,dataPtr->description->height,fmt,&(dataPtr->pixelData[0]));
		colorspaces::ImageRGB8 img_rgb888(imageRGB);//conversion will happen if needed
		cv::Mat localDataPtr = cv::Mat(cvSize(img_rgb888.width,img_rgb888.height), CV_8UC3, img_rgb888.data);
		cv::Mat localData;
		localDataPtr.copyTo(localData);
		this->controlMutex.lock();
		this->data.release();
		localData.copyTo(this->data);
		this->controlMutex.unlock();

		if (totalpre !=0){
			if ((totalpost - totalpre) > this->cycle ){
				std::cout<<"-------- kinectViewer: camera adquisition timeout-" << std::endl;
			}
			else{
				usleep(this->cycle - (totalpost - totalpre));
			}
		}
		totalpre=totalpost;
	}
}

cv::Mat cameraClient::getImage(){
	cv::Mat local;
	this->controlMutex.lock();
	this->data.copyTo(local);
	this->controlMutex.unlock();
	return local;

}

} /* namespace jderobot */