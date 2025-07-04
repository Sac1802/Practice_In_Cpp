# CMakeList.txt: proyecto de CMake para Driving_School, incluya el origen y defina
# la lógica específica del proyecto aquí.
#

# Agregue un origen al ejecutable de este proyecto.
add_executable (Driving_School "Driving_School.cpp" "Driving_School.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Driving_School PROPERTY CXX_STANDARD 20)
endif()

# TODO: Agregue pruebas y destinos de instalación si es necesario.
