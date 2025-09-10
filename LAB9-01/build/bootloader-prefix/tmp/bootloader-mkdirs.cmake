# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "/Users/tanwat/esp/v5.1-rc2/esp-idf/components/bootloader/subproject"
  "/Users/tanwat/091_Week-09-Microcontroller/091_Week-09-Microcontroller-applications/LAB9-01/build/bootloader"
  "/Users/tanwat/091_Week-09-Microcontroller/091_Week-09-Microcontroller-applications/LAB9-01/build/bootloader-prefix"
  "/Users/tanwat/091_Week-09-Microcontroller/091_Week-09-Microcontroller-applications/LAB9-01/build/bootloader-prefix/tmp"
  "/Users/tanwat/091_Week-09-Microcontroller/091_Week-09-Microcontroller-applications/LAB9-01/build/bootloader-prefix/src/bootloader-stamp"
  "/Users/tanwat/091_Week-09-Microcontroller/091_Week-09-Microcontroller-applications/LAB9-01/build/bootloader-prefix/src"
  "/Users/tanwat/091_Week-09-Microcontroller/091_Week-09-Microcontroller-applications/LAB9-01/build/bootloader-prefix/src/bootloader-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "/Users/tanwat/091_Week-09-Microcontroller/091_Week-09-Microcontroller-applications/LAB9-01/build/bootloader-prefix/src/bootloader-stamp/${subDir}")
endforeach()
if(cfgdir)
  file(MAKE_DIRECTORY "/Users/tanwat/091_Week-09-Microcontroller/091_Week-09-Microcontroller-applications/LAB9-01/build/bootloader-prefix/src/bootloader-stamp${cfgdir}") # cfgdir has leading slash
endif()
