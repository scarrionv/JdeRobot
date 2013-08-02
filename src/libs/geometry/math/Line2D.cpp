/*
 *
 *  Copyright (C) 1997-2013 JDERobot Developers Team
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
 *  Authors : Alejandro Hernández <ahcorde [at] gmail [dot] com>
 *            Roberto Calvo <rocapal [at] gsyc [dot] urjc [dot] es>
 *            Eduardo Perdices <eperdices [at] gsyc [dot] es>
 *
 */

#include "Line2D.h"

Line2D::Line2D() {
  this->v.setZero();
}

Line2D::Line2D(double p1x, double p1y, double p2x, double p2y) {
  this->v = this->getLine(p1x, p1y, p2x, p2y);
}

Line2D::Line2D(Eigen::Vector2d p1, Eigen::Vector2d p2) {
  this->v = this->getLine(p1, p2);
}

Line2D::Line2D(double va, double vb, double vc) {
  this->v << va, vb, vc;
}

Line2D::Line2D(Eigen::Vector3d v) {
  this->v = v;
}

Eigen::Vector3d
Line2D::getVector() {
  return this->v;
}

Eigen::Vector3d
Line2D::getLine(double p1x, double p1y, double p2x, double p2y) {
  Eigen::Vector3d v;

  /*Get the Ax + By + C = 0 parameters*/
	v(0) = p1y - p2y;           //y1*z2 - z1*y2
	v(1) = p2x - p1x;           //z1*x2 - x1*z2
	v(2) = p1x*p2y - p1y*p2x; 	//x1*y2 - y1*x2

  return v;
}

Eigen::Vector3d
Line2D::getLine(Eigen::Vector2d p1, Eigen::Vector2d p2) {
  Eigen::Vector3d v;

  /*Get the Ax + By + C = 0 parameters*/
	v(0) = p1(1) - p2(1);               //y1*z2 - z1*y2
	v(1) = p2(0) - p1(0);               //z1*x2 - x1*z2
	v(2) = p1(0)*p2(1) - p1(1)*p2(0); 	//x1*y2 - y1*x2

  return v;
}

Line2D
Line2D::getNormalLine(double px, double py) {
  Eigen::Vector3d vn;
  double nA, nB, nC;

  /*Calc the normal*/
  vn(0) = this->v(1);
  vn(1) = -this->v(0);
  vn(2) = -(px*vn(0) + py*vn(1)); //Solve equation Ax+By+C with central point

  return Line2D(vn);
}

