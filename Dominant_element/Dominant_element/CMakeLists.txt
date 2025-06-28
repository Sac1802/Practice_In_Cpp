# CMakeList.txt: proyecto de CMake para Dominant_element, incluya el origen y defina
# la lógica específica del proyecto aquí.
#

# Agregue un origen al ejecutable de este proyecto.
add_executable (Dominant_element "Dominant_element.cpp" "Dominant_element.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Dominant_element PROPERTY CXX_STANDARD 20)
endif()

# TODO: Agregue pruebas y destinos de instalación si es necesario.
