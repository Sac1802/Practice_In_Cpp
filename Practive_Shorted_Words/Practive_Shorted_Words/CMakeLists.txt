# CMakeList.txt: proyecto de CMake para Practive_Shorted_Words, incluya el origen y defina
# la lógica específica del proyecto aquí.
#

# Agregue un origen al ejecutable de este proyecto.
add_executable (Practive_Shorted_Words "Practive_Shorted_Words.cpp" "Practive_Shorted_Words.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Practive_Shorted_Words PROPERTY CXX_STANDARD 20)
endif()

# TODO: Agregue pruebas y destinos de instalación si es necesario.
