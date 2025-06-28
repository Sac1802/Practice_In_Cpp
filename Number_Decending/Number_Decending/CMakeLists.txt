# CMakeList.txt: proyecto de CMake para Number_Decending, incluya el origen y defina
# la lógica específica del proyecto aquí.
#

# Agregue un origen al ejecutable de este proyecto.
add_executable (Number_Decending "Number_Decending.cpp" "Number_Decending.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Number_Decending PROPERTY CXX_STANDARD 20)
endif()

# TODO: Agregue pruebas y destinos de instalación si es necesario.
