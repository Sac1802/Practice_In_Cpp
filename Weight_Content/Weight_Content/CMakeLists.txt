﻿# CMakeList.txt: proyecto de CMake para Weight_Content, incluya el origen y defina
# la lógica específica del proyecto aquí.
#

# Agregue un origen al ejecutable de este proyecto.
add_executable (Weight_Content "Weight_Content.cpp" "Weight_Content.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Weight_Content PROPERTY CXX_STANDARD 20)
endif()

# TODO: Agregue pruebas y destinos de instalación si es necesario.
