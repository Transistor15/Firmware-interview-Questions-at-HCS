# Distributed under the OSI-approved BSD 3-Clause License.  See accompanying
# file Copyright.txt or https://cmake.org/licensing for details.

cmake_minimum_required(VERSION 3.5)

file(MAKE_DIRECTORY
  "C:/Espressif/frameworks/esp-idf-v4.4.4/tools/kconfig"
  "C:/Users/LENOVO/test/build/bootloader/kconfig_bin"
  "C:/Users/LENOVO/test/build/bootloader/mconf-idf-prefix"
  "C:/Users/LENOVO/test/build/bootloader/mconf-idf-prefix/tmp"
  "C:/Users/LENOVO/test/build/bootloader/mconf-idf-prefix/src/mconf-idf-stamp"
  "C:/Users/LENOVO/test/build/bootloader/mconf-idf-prefix/src"
  "C:/Users/LENOVO/test/build/bootloader/mconf-idf-prefix/src/mconf-idf-stamp"
)

set(configSubDirs )
foreach(subDir IN LISTS configSubDirs)
    file(MAKE_DIRECTORY "C:/Users/LENOVO/test/build/bootloader/mconf-idf-prefix/src/mconf-idf-stamp/${subDir}")
endforeach()
