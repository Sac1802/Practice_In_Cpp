// Number_Decending.cpp: define el punto de entrada de la aplicación.
//

#include "Number_Decending.h"
#include <cinttypes>
#include <algorithm>
#include <string>


uint64_t descendingOrder(uint64_t a)  
{  
   std::string str = std::to_string(a);   
   std::sort(str.begin(), str.end(), std::greater<char>());  
   return std::stoull(str);  
}

int main()
{
	uint64_t value = descendingOrder(123456789);
	std::cout << "Descending Order: " << value << std::endl;
	return 0;
}
