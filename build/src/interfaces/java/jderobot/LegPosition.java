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
// Generated from file `bodymovements.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

package jderobot;

/**
 * simply leg position
 **/
public class LegPosition implements java.lang.Cloneable, java.io.Serializable
{
    public BodyMotor hip;

    public BodyMotor knee;

    public BodyMotor ankle;

    public LegPosition()
    {
    }

    public LegPosition(BodyMotor hip, BodyMotor knee, BodyMotor ankle)
    {
        this.hip = hip;
        this.knee = knee;
        this.ankle = ankle;
    }

    public boolean
    equals(java.lang.Object rhs)
    {
        if(this == rhs)
        {
            return true;
        }
        LegPosition _r = null;
        if(rhs instanceof LegPosition)
        {
            _r = (LegPosition)rhs;
        }

        if(_r != null)
        {
            if(hip != _r.hip)
            {
                if(hip == null || _r.hip == null || !hip.equals(_r.hip))
                {
                    return false;
                }
            }
            if(knee != _r.knee)
            {
                if(knee == null || _r.knee == null || !knee.equals(_r.knee))
                {
                    return false;
                }
            }
            if(ankle != _r.ankle)
            {
                if(ankle == null || _r.ankle == null || !ankle.equals(_r.ankle))
                {
                    return false;
                }
            }

            return true;
        }

        return false;
    }

    public int
    hashCode()
    {
        int __h = 5381;
        __h = IceInternal.HashUtil.hashAdd(__h, "::jderobot::LegPosition");
        __h = IceInternal.HashUtil.hashAdd(__h, hip);
        __h = IceInternal.HashUtil.hashAdd(__h, knee);
        __h = IceInternal.HashUtil.hashAdd(__h, ankle);
        return __h;
    }

    public java.lang.Object
    clone()
    {
        java.lang.Object o = null;
        try
        {
            o = super.clone();
        }
        catch(CloneNotSupportedException ex)
        {
            assert false; // impossible
        }
        return o;
    }

    public void
    __write(IceInternal.BasicStream __os)
    {
        hip.__write(__os);
        knee.__write(__os);
        ankle.__write(__os);
    }

    public void
    __read(IceInternal.BasicStream __is)
    {
        hip = new BodyMotor();
        hip.__read(__is);
        knee = new BodyMotor();
        knee.__read(__is);
        ankle = new BodyMotor();
        ankle.__read(__is);
    }

    public static final long serialVersionUID = -3181030666578966131L;
}