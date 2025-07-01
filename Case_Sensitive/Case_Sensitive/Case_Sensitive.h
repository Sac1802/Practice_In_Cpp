// Case_Sensitive.h: archivo de inclusión para archivos de inclusión estándar del sistema,  
// o archivos de inclusión específicos de un proyecto.  

#pragma once  

#include <iostream>  
#include <string>  
#include <vector>  
#include <utility>  
 
class CaseSensitiveClass {  
public:  
   std::pair<bool, std::vector<char>> case_Sensitive(const std::string& str);  
};
