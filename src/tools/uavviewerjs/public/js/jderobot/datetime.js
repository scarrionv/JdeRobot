// **********************************************************************
//
// Copyright (c) 2003-2016 ZeroC, Inc. All rights reserved.
//
// This copy of Ice is licensed to you under the terms described in the
// ICE_LICENSE file included in this distribution.
//
// **********************************************************************
//
// Ice version 3.6.3
//
// <auto-generated>
//
// Generated from file `datetime.ice'
//
// Warning: do not edit this file.
//
// </auto-generated>
//

(function(module, require, exports)
{
    var Ice = require("ice").Ice;
    var __M = Ice.__M;
    var Slice = Ice.Slice;

    var jderobot = __M.module("jderobot");

    jderobot.Time = Slice.defineStruct(
        function(seconds, useconds)
        {
            this.seconds = seconds !== undefined ? seconds : 0;
            this.useconds = useconds !== undefined ? useconds : 0;
        },
        true,
        function(__os)
        {
            __os.writeLong(this.seconds);
            __os.writeLong(this.useconds);
        },
        function(__is)
        {
            this.seconds = __is.readLong();
            this.useconds = __is.readLong();
        },
        16, 
        true);
    exports.jderobot = jderobot;
}
(typeof(global) !== "undefined" && typeof(global.process) !== "undefined" ? module : undefined,
 typeof(global) !== "undefined" && typeof(global.process) !== "undefined" ? require : this.Ice.__require,
 typeof(global) !== "undefined" && typeof(global.process) !== "undefined" ? exports : this));