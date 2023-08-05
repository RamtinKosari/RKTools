# ifndef __RKTOOLS_CORE
    /**
     * @file Core.hpp
     * @brief Open Source Useful Tools
     * @author ramtinkosari@gmail.com
     * @note Ramtin Kosari's Tools are Useful Tools in C++ Language
     * @version 1.1
     * @date 2023-06-06
     * 
     */
    # define __RKTOOLS_CORE
    //-- Check C++ Version
    # if __cplusplus < 201103L
        # error RKTools Must be be Compiled with C++14 (201402)
    # else
        //-- Check Operating System
        # if defined(unix) || defined(__unix) || defined(__unix__)
            /**
             * @brief Linux Detected
             */
            # define DEFAULT_OS 0
            # warning Linux Operating System Detected !
            //-- X11 Library is Used for Display QSSL's Windows
            # include <X11/Xlib.h>
        # elif defined(__APPLE__) || defined(__MACH__) || defined(macintosh) || defined(Macintosh)
            /**
             * @brief MacOS Detected
                */
            # define DEFAULT_OS 1
            //-- X11 Library is Used for Display QSSL's Windows
            # include <X11/Xlib.h>
        # elif defined(_WIN16) || defined(_WIN32) || defined(_WIN64) || defined(__CYGWIN__) || defined(__WIN32__) || defined(__WINDOWS__)
            /**
             * @brief Windows Detected
                */
            # define DEFAULT_OS 2
            //-- windows.h Library is Used for Display QSSL's Windows
            # include <windows.h>
        # elif defined(__ANDROID__)
            /**
             * @brief Android Detected
                */
            # define DEFAULT_OS 3
            # error QSSL is Not Compatible with Android
        # else
            /**
             * @brief None-Support Operating System Detected
                */
            # define DEFAULT_OS -1
            # error QSSL is Only Avalible on Unix Based Systems and Windows Operating Systems
        # endif // Check Operating System
        //-- Check Architecture
        # if defined(__amd64__) || defined(__amd64) || defined(__x86_64__) || defined(__x86_64)
            /**
             * @brief AMD64 (x86_64) Architecture Detected
                */
            # define ARCHITECTURE 0
            # warning AMD64 (x86_64) Architecture Detected !
        # elif defined(__arm__) || defined(_M_ARM)
            /**
             * @brief ARM Architecture Detected
                */
            # define ARCHITECTURE 1
        # elif defined(__i386) || defined(__i386__) || defined(__i486__) || defined(__i586__) || defined(__i686__)
            /**
             * @brief Intel x86 Architecture Detected
                */
            # define ARCHITECTURE 2
        # else
            /**
             * @brief None-Support Architecture Detected
                */
            # define ARCHITECTURE -1
            # error System Architecture is Not Compatible with QSSL
        # endif // Check Architecture
        //-- Include Needed Libraries
        # include <opencv4/opencv2/highgui.hpp>
        # include <opencv4/opencv2/imgproc.hpp>
        # include <sys/ioctl.h>
        # include <iostream>
        # include <dirent.h>
        # include <assert.h>
        # include <unistd.h>
        # include <typeinfo>
        # include <atomic>
        # include <thread>
        # include <chrono>
        # include <string>
        # include <vector>
        # include <cmath>
        # include <ctime>
        //-- Include Definitions
        # ifndef __RKTOOLS_DEFINITIONS
            # include "Definitions.hpp"
        # endif // Include Definitions
    # endif // Check C++ Version
# endif // __RKTOOLS_CORE