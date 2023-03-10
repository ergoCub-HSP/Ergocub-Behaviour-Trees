/*
 * SPDX-FileCopyrightText: 2006-2021 Istituto Italiano di Tecnologia (IIT)
 * SPDX-License-Identifier: BSD-3-Clause
 */

// Autogenerated by Thrift Compiler (0.14.1-yarped)
//
// This is an automatically generated file.
// It could get re-generated if the ALLOW_IDL_GENERATION flag is on.

#ifndef YARP_THRIFT_GENERATOR_SERVICE_MANIPULATIONINTERFACE_H
#define YARP_THRIFT_GENERATOR_SERVICE_MANIPULATIONINTERFACE_H

#include <yarp/os/Wire.h>
#include <yarp/os/idl/WireTypes.h>

class ManipulationInterface :
        public yarp::os::Wire
{
public:
    // Constructor
    ManipulationInterface();

    virtual std::string stop();

    virtual std::string home(const bool block);

    virtual std::string wave(const bool block);

    virtual std::string shake(const bool block);

    virtual std::string ready(const bool block);

    virtual std::string pose_grasp(const bool block, const std::vector<double>& hand_frames);

    virtual std::string testgrasp();

    virtual std::string grasp(const bool block);

    virtual std::string release(const bool block);

    virtual std::string ins();

    virtual std::string out();

    virtual std::string up();

    virtual std::string down();

    virtual std::string fore();

    virtual std::string aft();

    virtual std::string finished();

    virtual std::string egrasprlc();

    virtual std::string mgraspround();

    // help method
    virtual std::vector<std::string> help(const std::string& functionName = "--all");

    // read from ConnectionReader
    bool read(yarp::os::ConnectionReader& connection) override;
};

#endif // YARP_THRIFT_GENERATOR_SERVICE_MANIPULATIONINTERFACE_H
