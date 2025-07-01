# CMakeList.txt: proyecto de CMake para Case_Sensitive, incluya el origen y defina
# la lógica específica del proyecto aquí.
#

# Agregue un origen al ejecutable de este proyecto.
add_executable (Case_Sensitive "Case_Sensitive.cpp" "Case_Sensitive.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Case_Sensitive PROPERTY CXX_STANDARD 20)
endif()

# TODO: Agregue pruebas y destinos de instalación si es necesario.
