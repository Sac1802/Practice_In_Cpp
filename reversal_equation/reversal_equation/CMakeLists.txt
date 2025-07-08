# CMakeList.txt: proyecto de CMake para reversal_equation, incluya el origen y defina
# la lógica específica del proyecto aquí.
#

# Agregue un origen al ejecutable de este proyecto.
add_executable (reversal_equation "reversal_equation.cpp" "reversal_equation.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET reversal_equation PROPERTY CXX_STANDARD 20)
endif()

# TODO: Agregue pruebas y destinos de instalación si es necesario.
