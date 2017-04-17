// **********************************************************************
//
// Copyright (c) 2003-2013 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************
//
// Ice version 3.5.1
//
// <auto-generated>
//
// Generated from file `pose3dmotors.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

#include <jderobot/pose3dmotors.h>
#include <Ice/LocalException.h>
#include <Ice/ObjectFactory.h>
#include <Ice/BasicStream.h>
#include <Ice/Object.h>
#include <IceUtil/Iterator.h>

#ifndef ICE_IGNORE_VERSION
#   if ICE_INT_VERSION / 100 != 305
#       error Ice version mismatch!
#   endif
#   if ICE_INT_VERSION % 100 > 50
#       error Beta header file detected
#   endif
#   if ICE_INT_VERSION % 100 < 1
#       error Ice patch level mismatch!
#   endif
#endif

namespace
{

const ::std::string __jderobot__Pose3DMotors__setPose3DMotorsData_name = "setPose3DMotorsData";

const ::std::string __jderobot__Pose3DMotors__getPose3DMotorsData_name = "getPose3DMotorsData";

const ::std::string __jderobot__Pose3DMotors__getPose3DMotorsParams_name = "getPose3DMotorsParams";

}
::IceProxy::Ice::Object* ::IceProxy::jderobot::upCast(::IceProxy::jderobot::Pose3DMotorsData* p) { return p; }

void
::IceProxy::jderobot::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::jderobot::Pose3DMotorsData>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::jderobot::Pose3DMotorsData;
        v->__copyFrom(proxy);
    }
}

const ::std::string&
IceProxy::jderobot::Pose3DMotorsData::ice_staticId()
{
    return ::jderobot::Pose3DMotorsData::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::jderobot::Pose3DMotorsData::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::jderobot::Pose3DMotorsData);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::jderobot::Pose3DMotorsData::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::jderobot::Pose3DMotorsData);
}

::IceProxy::Ice::Object*
IceProxy::jderobot::Pose3DMotorsData::__newInstance() const
{
    return new Pose3DMotorsData;
}
::IceProxy::Ice::Object* ::IceProxy::jderobot::upCast(::IceProxy::jderobot::Pose3DMotorsParams* p) { return p; }

void
::IceProxy::jderobot::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::jderobot::Pose3DMotorsParams>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::jderobot::Pose3DMotorsParams;
        v->__copyFrom(proxy);
    }
}

const ::std::string&
IceProxy::jderobot::Pose3DMotorsParams::ice_staticId()
{
    return ::jderobot::Pose3DMotorsParams::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::jderobot::Pose3DMotorsParams::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::jderobot::Pose3DMotorsParams);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::jderobot::Pose3DMotorsParams::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::jderobot::Pose3DMotorsParams);
}

::IceProxy::Ice::Object*
IceProxy::jderobot::Pose3DMotorsParams::__newInstance() const
{
    return new Pose3DMotorsParams;
}
::IceProxy::Ice::Object* ::IceProxy::jderobot::upCast(::IceProxy::jderobot::Pose3DMotors* p) { return p; }

void
::IceProxy::jderobot::__read(::IceInternal::BasicStream* __is, ::IceInternal::ProxyHandle< ::IceProxy::jderobot::Pose3DMotors>& v)
{
    ::Ice::ObjectPrx proxy;
    __is->read(proxy);
    if(!proxy)
    {
        v = 0;
    }
    else
    {
        v = new ::IceProxy::jderobot::Pose3DMotors;
        v->__copyFrom(proxy);
    }
}

::Ice::Int
IceProxy::jderobot::Pose3DMotors::setPose3DMotorsData(const ::jderobot::Pose3DMotorsDataPtr& data, const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __jderobot__Pose3DMotors__setPose3DMotorsData_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__jderobot__Pose3DMotors__setPose3DMotorsData_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::jderobot::Pose3DMotors* __del = dynamic_cast< ::IceDelegate::jderobot::Pose3DMotors*>(__delBase.get());
            return __del->setPose3DMotorsData(data, __ctx, __observer);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapper(__delBase, __ex, __observer);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, true, __cnt, __observer);
        }
    }
}

::Ice::AsyncResultPtr
IceProxy::jderobot::Pose3DMotors::begin_setPose3DMotorsData(const ::jderobot::Pose3DMotorsDataPtr& data, const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    __checkAsyncTwowayOnly(__jderobot__Pose3DMotors__setPose3DMotorsData_name);
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __jderobot__Pose3DMotors__setPose3DMotorsData_name, __del, __cookie);
    try
    {
        __result->__prepare(__jderobot__Pose3DMotors__setPose3DMotorsData_name, ::Ice::Normal, __ctx);
        ::IceInternal::BasicStream* __os = __result->__startWriteParams(::Ice::DefaultFormat);
        __os->write(data);
        __os->writePendingObjects();
        __result->__endWriteParams();
        __result->__send(true);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __result->__exceptionAsync(__ex);
    }
    return __result;
}

::Ice::Int
IceProxy::jderobot::Pose3DMotors::end_setPose3DMotorsData(const ::Ice::AsyncResultPtr& __result)
{
    ::Ice::AsyncResult::__check(__result, this, __jderobot__Pose3DMotors__setPose3DMotorsData_name);
    ::Ice::Int __ret;
    bool __ok = __result->__wait();
    try
    {
        if(!__ok)
        {
            try
            {
                __result->__throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::IceInternal::BasicStream* __is = __result->__startReadParams();
        __is->read(__ret);
        __result->__endReadParams();
        return __ret;
    }
    catch(const ::Ice::LocalException& ex)
    {
        __result->__getObserver().failed(ex.ice_name());
        throw;
    }
}

::jderobot::Pose3DMotorsDataPtr
IceProxy::jderobot::Pose3DMotors::getPose3DMotorsData(const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __jderobot__Pose3DMotors__getPose3DMotorsData_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__jderobot__Pose3DMotors__getPose3DMotorsData_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::jderobot::Pose3DMotors* __del = dynamic_cast< ::IceDelegate::jderobot::Pose3DMotors*>(__delBase.get());
            return __del->getPose3DMotorsData(__ctx, __observer);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapperRelaxed(__delBase, __ex, true, __cnt, __observer);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, true, __cnt, __observer);
        }
    }
}

::Ice::AsyncResultPtr
IceProxy::jderobot::Pose3DMotors::begin_getPose3DMotorsData(const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    __checkAsyncTwowayOnly(__jderobot__Pose3DMotors__getPose3DMotorsData_name);
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __jderobot__Pose3DMotors__getPose3DMotorsData_name, __del, __cookie);
    try
    {
        __result->__prepare(__jderobot__Pose3DMotors__getPose3DMotorsData_name, ::Ice::Idempotent, __ctx);
        __result->__writeEmptyParams();
        __result->__send(true);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __result->__exceptionAsync(__ex);
    }
    return __result;
}

::jderobot::Pose3DMotorsDataPtr
IceProxy::jderobot::Pose3DMotors::end_getPose3DMotorsData(const ::Ice::AsyncResultPtr& __result)
{
    ::Ice::AsyncResult::__check(__result, this, __jderobot__Pose3DMotors__getPose3DMotorsData_name);
    ::jderobot::Pose3DMotorsDataPtr __ret;
    bool __ok = __result->__wait();
    try
    {
        if(!__ok)
        {
            try
            {
                __result->__throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::IceInternal::BasicStream* __is = __result->__startReadParams();
        __is->read(__ret);
        __is->readPendingObjects();
        __result->__endReadParams();
        return __ret;
    }
    catch(const ::Ice::LocalException& ex)
    {
        __result->__getObserver().failed(ex.ice_name());
        throw;
    }
}

::jderobot::Pose3DMotorsParamsPtr
IceProxy::jderobot::Pose3DMotors::getPose3DMotorsParams(const ::Ice::Context* __ctx)
{
    ::IceInternal::InvocationObserver __observer(this, __jderobot__Pose3DMotors__getPose3DMotorsParams_name, __ctx);
    int __cnt = 0;
    while(true)
    {
        ::IceInternal::Handle< ::IceDelegate::Ice::Object> __delBase;
        try
        {
            __checkTwowayOnly(__jderobot__Pose3DMotors__getPose3DMotorsParams_name);
            __delBase = __getDelegate(false);
            ::IceDelegate::jderobot::Pose3DMotors* __del = dynamic_cast< ::IceDelegate::jderobot::Pose3DMotors*>(__delBase.get());
            return __del->getPose3DMotorsParams(__ctx, __observer);
        }
        catch(const ::IceInternal::LocalExceptionWrapper& __ex)
        {
            __handleExceptionWrapperRelaxed(__delBase, __ex, true, __cnt, __observer);
        }
        catch(const ::Ice::LocalException& __ex)
        {
            __handleException(__delBase, __ex, true, __cnt, __observer);
        }
    }
}

::Ice::AsyncResultPtr
IceProxy::jderobot::Pose3DMotors::begin_getPose3DMotorsParams(const ::Ice::Context* __ctx, const ::IceInternal::CallbackBasePtr& __del, const ::Ice::LocalObjectPtr& __cookie)
{
    __checkAsyncTwowayOnly(__jderobot__Pose3DMotors__getPose3DMotorsParams_name);
    ::IceInternal::OutgoingAsyncPtr __result = new ::IceInternal::OutgoingAsync(this, __jderobot__Pose3DMotors__getPose3DMotorsParams_name, __del, __cookie);
    try
    {
        __result->__prepare(__jderobot__Pose3DMotors__getPose3DMotorsParams_name, ::Ice::Idempotent, __ctx);
        __result->__writeEmptyParams();
        __result->__send(true);
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __result->__exceptionAsync(__ex);
    }
    return __result;
}

::jderobot::Pose3DMotorsParamsPtr
IceProxy::jderobot::Pose3DMotors::end_getPose3DMotorsParams(const ::Ice::AsyncResultPtr& __result)
{
    ::Ice::AsyncResult::__check(__result, this, __jderobot__Pose3DMotors__getPose3DMotorsParams_name);
    ::jderobot::Pose3DMotorsParamsPtr __ret;
    bool __ok = __result->__wait();
    try
    {
        if(!__ok)
        {
            try
            {
                __result->__throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                throw ::Ice::UnknownUserException(__FILE__, __LINE__, __ex.ice_name());
            }
        }
        ::IceInternal::BasicStream* __is = __result->__startReadParams();
        __is->read(__ret);
        __is->readPendingObjects();
        __result->__endReadParams();
        return __ret;
    }
    catch(const ::Ice::LocalException& ex)
    {
        __result->__getObserver().failed(ex.ice_name());
        throw;
    }
}

const ::std::string&
IceProxy::jderobot::Pose3DMotors::ice_staticId()
{
    return ::jderobot::Pose3DMotors::ice_staticId();
}

::IceInternal::Handle< ::IceDelegateM::Ice::Object>
IceProxy::jderobot::Pose3DMotors::__createDelegateM()
{
    return ::IceInternal::Handle< ::IceDelegateM::Ice::Object>(new ::IceDelegateM::jderobot::Pose3DMotors);
}

::IceInternal::Handle< ::IceDelegateD::Ice::Object>
IceProxy::jderobot::Pose3DMotors::__createDelegateD()
{
    return ::IceInternal::Handle< ::IceDelegateD::Ice::Object>(new ::IceDelegateD::jderobot::Pose3DMotors);
}

::IceProxy::Ice::Object*
IceProxy::jderobot::Pose3DMotors::__newInstance() const
{
    return new Pose3DMotors;
}

::Ice::Int
IceDelegateM::jderobot::Pose3DMotors::setPose3DMotorsData(const ::jderobot::Pose3DMotorsDataPtr& data, const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __jderobot__Pose3DMotors__setPose3DMotorsData_name, ::Ice::Normal, __context, __observer);
    try
    {
        ::IceInternal::BasicStream* __os = __og.startWriteParams(::Ice::DefaultFormat);
        __os->write(data);
        __os->writePendingObjects();
        __og.endWriteParams();
    }
    catch(const ::Ice::LocalException& __ex)
    {
        __og.abort(__ex);
    }
    bool __ok = __og.invoke();
    ::Ice::Int __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.startReadParams();
        __is->read(__ret);
        __og.endReadParams();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::jderobot::Pose3DMotorsDataPtr
IceDelegateM::jderobot::Pose3DMotors::getPose3DMotorsData(const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __jderobot__Pose3DMotors__getPose3DMotorsData_name, ::Ice::Idempotent, __context, __observer);
    __og.writeEmptyParams();
    bool __ok = __og.invoke();
    ::jderobot::Pose3DMotorsDataPtr __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.startReadParams();
        __is->read(__ret);
        __is->readPendingObjects();
        __og.endReadParams();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::jderobot::Pose3DMotorsParamsPtr
IceDelegateM::jderobot::Pose3DMotors::getPose3DMotorsParams(const ::Ice::Context* __context, ::IceInternal::InvocationObserver& __observer)
{
    ::IceInternal::Outgoing __og(__handler.get(), __jderobot__Pose3DMotors__getPose3DMotorsParams_name, ::Ice::Idempotent, __context, __observer);
    __og.writeEmptyParams();
    bool __ok = __og.invoke();
    ::jderobot::Pose3DMotorsParamsPtr __ret;
    try
    {
        if(!__ok)
        {
            try
            {
                __og.throwUserException();
            }
            catch(const ::Ice::UserException& __ex)
            {
                ::Ice::UnknownUserException __uue(__FILE__, __LINE__, __ex.ice_name());
                throw __uue;
            }
        }
        ::IceInternal::BasicStream* __is = __og.startReadParams();
        __is->read(__ret);
        __is->readPendingObjects();
        __og.endReadParams();
        return __ret;
    }
    catch(const ::Ice::LocalException& __ex)
    {
        throw ::IceInternal::LocalExceptionWrapper(__ex, false);
    }
}

::Ice::Int
IceDelegateD::jderobot::Pose3DMotors::setPose3DMotorsData(const ::jderobot::Pose3DMotorsDataPtr& data, const ::Ice::Context* __context, ::IceInternal::InvocationObserver&)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::Ice::Int& __result, const ::jderobot::Pose3DMotorsDataPtr& __p_data, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result),
            _m_data(__p_data)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::jderobot::Pose3DMotors* servant = dynamic_cast< ::jderobot::Pose3DMotors*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->setPose3DMotorsData(_m_data, _current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::Ice::Int& _result;
        const ::jderobot::Pose3DMotorsDataPtr& _m_data;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __jderobot__Pose3DMotors__setPose3DMotorsData_name, ::Ice::Normal, __context);
    ::Ice::Int __result;
    try
    {
        _DirectI __direct(__result, data, __current);
        try
        {
            __direct.getServant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::jderobot::Pose3DMotorsDataPtr
IceDelegateD::jderobot::Pose3DMotors::getPose3DMotorsData(const ::Ice::Context* __context, ::IceInternal::InvocationObserver&)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::jderobot::Pose3DMotorsDataPtr& __result, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::jderobot::Pose3DMotors* servant = dynamic_cast< ::jderobot::Pose3DMotors*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getPose3DMotorsData(_current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::jderobot::Pose3DMotorsDataPtr& _result;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __jderobot__Pose3DMotors__getPose3DMotorsData_name, ::Ice::Idempotent, __context);
    ::jderobot::Pose3DMotorsDataPtr __result;
    try
    {
        _DirectI __direct(__result, __current);
        try
        {
            __direct.getServant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::jderobot::Pose3DMotorsParamsPtr
IceDelegateD::jderobot::Pose3DMotors::getPose3DMotorsParams(const ::Ice::Context* __context, ::IceInternal::InvocationObserver&)
{
    class _DirectI : public ::IceInternal::Direct
    {
    public:

        _DirectI(::jderobot::Pose3DMotorsParamsPtr& __result, const ::Ice::Current& __current) : 
            ::IceInternal::Direct(__current),
            _result(__result)
        {
        }
        
        virtual ::Ice::DispatchStatus
        run(::Ice::Object* object)
        {
            ::jderobot::Pose3DMotors* servant = dynamic_cast< ::jderobot::Pose3DMotors*>(object);
            if(!servant)
            {
                throw ::Ice::OperationNotExistException(__FILE__, __LINE__, _current.id, _current.facet, _current.operation);
            }
            _result = servant->getPose3DMotorsParams(_current);
            return ::Ice::DispatchOK;
        }
        
    private:
        
        ::jderobot::Pose3DMotorsParamsPtr& _result;
    };
    
    ::Ice::Current __current;
    __initCurrent(__current, __jderobot__Pose3DMotors__getPose3DMotorsParams_name, ::Ice::Idempotent, __context);
    ::jderobot::Pose3DMotorsParamsPtr __result;
    try
    {
        _DirectI __direct(__result, __current);
        try
        {
            __direct.getServant()->__collocDispatch(__direct);
        }
        catch(...)
        {
            __direct.destroy();
            throw;
        }
        __direct.destroy();
    }
    catch(const ::Ice::SystemException&)
    {
        throw;
    }
    catch(const ::IceInternal::LocalExceptionWrapper&)
    {
        throw;
    }
    catch(const ::std::exception& __ex)
    {
        ::IceInternal::LocalExceptionWrapper::throwWrapper(__ex);
    }
    catch(...)
    {
        throw ::IceInternal::LocalExceptionWrapper(::Ice::UnknownException(__FILE__, __LINE__, "unknown c++ exception"), false);
    }
    return __result;
}

::Ice::Object* jderobot::upCast(::jderobot::Pose3DMotorsData* p) { return p; }
::Ice::ObjectPtr
jderobot::Pose3DMotorsData::ice_clone() const
{
    ::Ice::Object* __p = new Pose3DMotorsData(*this);
    return __p;
}

namespace
{
const ::std::string __jderobot__Pose3DMotorsData_ids[2] =
{
    "::Ice::Object",
    "::jderobot::Pose3DMotorsData"
};

}

bool
jderobot::Pose3DMotorsData::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__jderobot__Pose3DMotorsData_ids, __jderobot__Pose3DMotorsData_ids + 2, _s);
}

::std::vector< ::std::string>
jderobot::Pose3DMotorsData::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__jderobot__Pose3DMotorsData_ids[0], &__jderobot__Pose3DMotorsData_ids[2]);
}

const ::std::string&
jderobot::Pose3DMotorsData::ice_id(const ::Ice::Current&) const
{
    return __jderobot__Pose3DMotorsData_ids[1];
}

const ::std::string&
jderobot::Pose3DMotorsData::ice_staticId()
{
    return __jderobot__Pose3DMotorsData_ids[1];
}

void
jderobot::Pose3DMotorsData::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, true);
    __os->write(x);
    __os->write(y);
    __os->write(z);
    __os->write(pan);
    __os->write(tilt);
    __os->write(roll);
    __os->write(panSpeed);
    __os->write(tiltSpeed);
    __os->endWriteSlice();
}

void
jderobot::Pose3DMotorsData::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->read(x);
    __is->read(y);
    __is->read(z);
    __is->read(pan);
    __is->read(tilt);
    __is->read(roll);
    __is->read(panSpeed);
    __is->read(tiltSpeed);
    __is->endReadSlice();
}

namespace
{

class __F__jderobot__Pose3DMotorsData : public ::Ice::ObjectFactory
{
public:
#ifndef NDEBUG
virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
#else
virtual ::Ice::ObjectPtr
    create(const ::std::string&)
#endif
    {
        assert(type == ::jderobot::Pose3DMotorsData::ice_staticId());
        return new ::jderobot::Pose3DMotorsData;
    }

    virtual void
    destroy()
    {
    }
};
const ::Ice::ObjectFactoryPtr __F__jderobot__Pose3DMotorsData_Ptr = new __F__jderobot__Pose3DMotorsData;

class __F__jderobot__Pose3DMotorsData__Init
{
public:

    __F__jderobot__Pose3DMotorsData__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::jderobot::Pose3DMotorsData::ice_staticId(), __F__jderobot__Pose3DMotorsData_Ptr);
    }

    ~__F__jderobot__Pose3DMotorsData__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::jderobot::Pose3DMotorsData::ice_staticId());
    }
};

const __F__jderobot__Pose3DMotorsData__Init __F__jderobot__Pose3DMotorsData__i;

}

const ::Ice::ObjectFactoryPtr&
jderobot::Pose3DMotorsData::ice_factory()
{
    return __F__jderobot__Pose3DMotorsData_Ptr;
}

void 
jderobot::__patch(Pose3DMotorsDataPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::jderobot::Pose3DMotorsDataPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::jderobot::Pose3DMotorsData::ice_staticId(), v);
    }
}

::Ice::Object* jderobot::upCast(::jderobot::Pose3DMotorsParams* p) { return p; }
::Ice::ObjectPtr
jderobot::Pose3DMotorsParams::ice_clone() const
{
    ::Ice::Object* __p = new Pose3DMotorsParams(*this);
    return __p;
}

namespace
{
const ::std::string __jderobot__Pose3DMotorsParams_ids[2] =
{
    "::Ice::Object",
    "::jderobot::Pose3DMotorsParams"
};

}

bool
jderobot::Pose3DMotorsParams::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__jderobot__Pose3DMotorsParams_ids, __jderobot__Pose3DMotorsParams_ids + 2, _s);
}

::std::vector< ::std::string>
jderobot::Pose3DMotorsParams::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__jderobot__Pose3DMotorsParams_ids[0], &__jderobot__Pose3DMotorsParams_ids[2]);
}

const ::std::string&
jderobot::Pose3DMotorsParams::ice_id(const ::Ice::Current&) const
{
    return __jderobot__Pose3DMotorsParams_ids[1];
}

const ::std::string&
jderobot::Pose3DMotorsParams::ice_staticId()
{
    return __jderobot__Pose3DMotorsParams_ids[1];
}

void
jderobot::Pose3DMotorsParams::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, true);
    __os->write(maxPan);
    __os->write(minPan);
    __os->write(maxTilt);
    __os->write(minTilt);
    __os->write(maxPanSpeed);
    __os->write(maxTiltSpeed);
    __os->endWriteSlice();
}

void
jderobot::Pose3DMotorsParams::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->read(maxPan);
    __is->read(minPan);
    __is->read(maxTilt);
    __is->read(minTilt);
    __is->read(maxPanSpeed);
    __is->read(maxTiltSpeed);
    __is->endReadSlice();
}

namespace
{

class __F__jderobot__Pose3DMotorsParams : public ::Ice::ObjectFactory
{
public:
#ifndef NDEBUG
virtual ::Ice::ObjectPtr
    create(const ::std::string& type)
#else
virtual ::Ice::ObjectPtr
    create(const ::std::string&)
#endif
    {
        assert(type == ::jderobot::Pose3DMotorsParams::ice_staticId());
        return new ::jderobot::Pose3DMotorsParams;
    }

    virtual void
    destroy()
    {
    }
};
const ::Ice::ObjectFactoryPtr __F__jderobot__Pose3DMotorsParams_Ptr = new __F__jderobot__Pose3DMotorsParams;

class __F__jderobot__Pose3DMotorsParams__Init
{
public:

    __F__jderobot__Pose3DMotorsParams__Init()
    {
        ::IceInternal::factoryTable->addObjectFactory(::jderobot::Pose3DMotorsParams::ice_staticId(), __F__jderobot__Pose3DMotorsParams_Ptr);
    }

    ~__F__jderobot__Pose3DMotorsParams__Init()
    {
        ::IceInternal::factoryTable->removeObjectFactory(::jderobot::Pose3DMotorsParams::ice_staticId());
    }
};

const __F__jderobot__Pose3DMotorsParams__Init __F__jderobot__Pose3DMotorsParams__i;

}

const ::Ice::ObjectFactoryPtr&
jderobot::Pose3DMotorsParams::ice_factory()
{
    return __F__jderobot__Pose3DMotorsParams_Ptr;
}

void 
jderobot::__patch(Pose3DMotorsParamsPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::jderobot::Pose3DMotorsParamsPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::jderobot::Pose3DMotorsParams::ice_staticId(), v);
    }
}

::Ice::Object* jderobot::upCast(::jderobot::Pose3DMotors* p) { return p; }

namespace
{
const ::std::string __jderobot__Pose3DMotors_ids[2] =
{
    "::Ice::Object",
    "::jderobot::Pose3DMotors"
};

}

bool
jderobot::Pose3DMotors::ice_isA(const ::std::string& _s, const ::Ice::Current&) const
{
    return ::std::binary_search(__jderobot__Pose3DMotors_ids, __jderobot__Pose3DMotors_ids + 2, _s);
}

::std::vector< ::std::string>
jderobot::Pose3DMotors::ice_ids(const ::Ice::Current&) const
{
    return ::std::vector< ::std::string>(&__jderobot__Pose3DMotors_ids[0], &__jderobot__Pose3DMotors_ids[2]);
}

const ::std::string&
jderobot::Pose3DMotors::ice_id(const ::Ice::Current&) const
{
    return __jderobot__Pose3DMotors_ids[1];
}

const ::std::string&
jderobot::Pose3DMotors::ice_staticId()
{
    return __jderobot__Pose3DMotors_ids[1];
}

::Ice::DispatchStatus
jderobot::Pose3DMotors::___setPose3DMotorsData(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Normal, __current.mode);
    ::IceInternal::BasicStream* __is = __inS.startReadParams();
    ::jderobot::Pose3DMotorsDataPtr data;
    __is->read(data);
    __is->readPendingObjects();
    __inS.endReadParams();
    ::Ice::Int __ret = setPose3DMotorsData(data, __current);
    ::IceInternal::BasicStream* __os = __inS.__startWriteParams(::Ice::DefaultFormat);
    __os->write(__ret);
    __inS.__endWriteParams(true);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
jderobot::Pose3DMotors::___getPose3DMotorsData(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Idempotent, __current.mode);
    __inS.readEmptyParams();
    ::jderobot::Pose3DMotorsDataPtr __ret = getPose3DMotorsData(__current);
    ::IceInternal::BasicStream* __os = __inS.__startWriteParams(::Ice::DefaultFormat);
    __os->write(__ret);
    __os->writePendingObjects();
    __inS.__endWriteParams(true);
    return ::Ice::DispatchOK;
}

::Ice::DispatchStatus
jderobot::Pose3DMotors::___getPose3DMotorsParams(::IceInternal::Incoming& __inS, const ::Ice::Current& __current)
{
    __checkMode(::Ice::Idempotent, __current.mode);
    __inS.readEmptyParams();
    ::jderobot::Pose3DMotorsParamsPtr __ret = getPose3DMotorsParams(__current);
    ::IceInternal::BasicStream* __os = __inS.__startWriteParams(::Ice::DefaultFormat);
    __os->write(__ret);
    __os->writePendingObjects();
    __inS.__endWriteParams(true);
    return ::Ice::DispatchOK;
}

namespace
{
const ::std::string __jderobot__Pose3DMotors_all[] =
{
    "getPose3DMotorsData",
    "getPose3DMotorsParams",
    "ice_id",
    "ice_ids",
    "ice_isA",
    "ice_ping",
    "setPose3DMotorsData"
};

}

::Ice::DispatchStatus
jderobot::Pose3DMotors::__dispatch(::IceInternal::Incoming& in, const ::Ice::Current& current)
{
    ::std::pair< const ::std::string*, const ::std::string*> r = ::std::equal_range(__jderobot__Pose3DMotors_all, __jderobot__Pose3DMotors_all + 7, current.operation);
    if(r.first == r.second)
    {
        throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
    }

    switch(r.first - __jderobot__Pose3DMotors_all)
    {
        case 0:
        {
            return ___getPose3DMotorsData(in, current);
        }
        case 1:
        {
            return ___getPose3DMotorsParams(in, current);
        }
        case 2:
        {
            return ___ice_id(in, current);
        }
        case 3:
        {
            return ___ice_ids(in, current);
        }
        case 4:
        {
            return ___ice_isA(in, current);
        }
        case 5:
        {
            return ___ice_ping(in, current);
        }
        case 6:
        {
            return ___setPose3DMotorsData(in, current);
        }
    }

    assert(false);
    throw ::Ice::OperationNotExistException(__FILE__, __LINE__, current.id, current.facet, current.operation);
}

void
jderobot::Pose3DMotors::__writeImpl(::IceInternal::BasicStream* __os) const
{
    __os->startWriteSlice(ice_staticId(), -1, true);
    __os->endWriteSlice();
}

void
jderobot::Pose3DMotors::__readImpl(::IceInternal::BasicStream* __is)
{
    __is->startReadSlice();
    __is->endReadSlice();
}

void 
jderobot::__patch(Pose3DMotorsPtr& handle, const ::Ice::ObjectPtr& v)
{
    handle = ::jderobot::Pose3DMotorsPtr::dynamicCast(v);
    if(v && !handle)
    {
        IceInternal::Ex::throwUOE(::jderobot::Pose3DMotors::ice_staticId(), v);
    }
}