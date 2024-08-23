# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "Button_autogen"
  "CMakeFiles\\Button_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\Button_autogen.dir\\ParseCache.txt"
  )
endif()
