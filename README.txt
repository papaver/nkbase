        NektarFX base (nkbase) release 0.0.1

These are release notes for nkbase version 0.0.1. Read them carefully as they
tell you what this is all about, explaining how to install the library and what
to do if something goes wrong. 

--------------------------------------------------------------------------------

What is nkbase?

    nkbase serves as the core library that contains shared components used
    across all NetkarFX libraries and tools.

    It is distributed under the BSD License -- see the accompanying LICENSE.txt
    file for more details.

    To keep up with news and the latest developments on nkbase, you may want to
    subscribe to our rss feed at : http://www.nektarfx.com/projects/nkbase

    If you have questions about using and contributing to NektarFX libraries,
    you can email us at: code@nektarfx.com. 

--------------------------------------------------------------------------------

Contributing 

    The success of the library depends on contributors like yourself. There are
    several ways to contribute to the project, from writing documentation to
    writing language bindings to adding core features. You don't necessarily
    have to be a developer to contribute. 

    For more details on how to contribute to our open source projects, please
    refer to the contribution guide at : http://www.nektarfx.com/contributing

    If you have feature/support requests or general comments, questions, and
    concerns, please contact us at code@nektarfx.com. We are always eager to
    hear from you with feedback that can help improve the project.

--------------------------------------------------------------------------------

Checking out the Source

    You can checkout the source using git from github. Refer to 
    http://help.github.com/ for details in checking out git repositories and
    using github in general. 

    The code is organized into two branches: "dev" and "master". The master
    branch is our release branch and is always stable. The development branch
    contains incremental feature development from NektarFX as well as external
    contributors like yourself. The "dev" branch is not guaranteed to be stable
    but will most likely contain newer features. The "master" branch will only
    contain our stable releases with each commit tagged with the release
    version of the library. 

    Every so often, NektarFX will integrate a commit point from the "dev"
    branch into the "master" branch for a new release if and only if the commit
    point is stable passes QA.

--------------------------------------------------------------------------------

Supported Platforms
    
    All flavors of Unix, Linux, and Mac OS X.

    Windows is not currently supported at this time. Although, if you are
    proficient with cmake, minor tweaks can be made to make it ready for a
    window distribution as well.

--------------------------------------------------------------------------------

Documentation

    There is ample documentation available for nkbase on the project website
    and blog at : http://www.nektarfx.com/nkbase. This README is not meant to
    serve as a complete documentation to the system. 

--------------------------------------------------------------------------------

Dependencies

    cmake (version 2.8 or later) - http://www.cmake.org 
    Required for building and installing the library. 

    IlmBase Libraries (required) - http://www.openexr.com
    Required for basic math operations. 
    This version of nkbase was tested against ilmbase version 1.0.2.

    cppunit library (if building local unittests) -
    http://sourceforge.net/projects/cppunit/
    Required for writing and running unittests. 
    This version of nkbase was tested against cppunit version 1.12.1

--------------------------------------------------------------------------------

Building & Installation

    0. Make sure that you have cmake installed and the cmake binaries are in
       your PATH environment. You will need to run the commands "cmake" and
       "ccmake" to build this library properly.

    1. mkdir build; cd build;
       Make a build directory inside the root of the source package you
       downloaded/cloned for nkbase. All builds should happen here. 

    2. ccmake ..; 
       This will run the cmake gui that can be used to generate make files for
       the project. 

    3. Within the cmake gui, press 'c' to configure the project. If you do not
       get any errors, then make sure that all settings shown are correct.

       By default, unittests are configured to build. However, if you trust the
       developers of the library, don't wish to run/build unittests of your
       own, or don't want to install cppunit, then set the BUILD_UNITTESTS
       setting to OFF.

       To compile with optimizations, you should change the CMAKE_BUILD_TYPE
       setting from "Debug" to "Release".

       You can also change the default install path by changing the
       CMAKE_INSTALL_PREFIX setting to a path you desire. This will be the base
       path. The installation procedure will create an "include" directory and
       a "lib" directory in the path defined here. The "include" directory will
       contain all library headers and the "lib" directory will contain the
       library binaries.

       If you have the ILM base libraries installed in a non-standard location
       and cmake is unable to find them, you may need to tell cmake where it
       can find the ILM base libraries and headers. Change the path for setting
       IlmBase_Inc_Dir to the include directory that contains the library's
       headers. This should be the directory containing the folder 'OpenEXR'.
       Next, change the setting for IlmBase_Lib_Dir to the path where the binary
       shared libraries are located.

       If you have BUILD_UNITTESTS set to ON, cmake will check for cppunit. If
       you have cppunit installed in a non-standard location and cmake cannot
       find it, you will need to specify the path where cppunit's headers and
       library reside. Change the path for setting CppUnit_Inc_Dir to the
       include directory that contains the library's headers. This should be
       the path that contains the folder called 'cppunit'. Next, change the
       setting for CppUnit_Lib_Dir to the path where the binary shared library
       is located.

       Once you have confirmed all your settings, you need to press 'c' again,
       and then press 'g' to generate the actual makes files. This will return
       you back to the command line.

    4. After configuring the project using ccmake, build the project by typing: 
       
       make all;

    4a. If you have BUILD_UNITTESTS set to ON, you should have a unittest
        directory in your build directory. You can run unittests by running the
        executable: ./unittests/unittests 

    5. To install the project in the location of your CMAKE_INSTALL_PREFIX path
       type : 

       make install;

       Note that this may require you to have sudo/root privileges. Also, this
       will only install the library and its headers; it will not install
       unittests. 

    6. If you are having trouble building/installing the library using these
       steps, check the project website for documentation at
       http://www.nektarfx.com/nkbase. If you do not find your answers there,
       please contact us at code@nektarfx.com with a detailed account of the
       problem you are running into. 

--------------------------------------------------------------------------------

When Things Go Wrong

    If you are having problems building, installing, running, and/or using
    nkbase that you believe is attributed to a bug, please file a bug using the
    issue tracker on github at https://github.com/NektarFX/nkbase/issues or 
    email us at code@nektarfx.com. 

    In all bug-reports, *please* tell what version of the library you are
    talking about, how to duplicate the problem, and what your setup is. Please
    also check against existing outstanding issues on github to avoid filing
    duplicate bug reports. If you would like status on a particular issue/bug
    report, make a comment on the particular issue on github or email us at
    code@nektarfx.com, specifying which issue and project you are referring to.

    For bug reports, please try to build the library in debug mode and send us
    the debug dump information if there is any. 

--------------------------------------------------------------------------------
