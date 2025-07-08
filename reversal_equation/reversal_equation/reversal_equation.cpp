// reversal_equation.cpp: define el punto de entrada de la aplicación.
//

#include "reversal_equation.h"

std::string reversal_equation::solve(std::string eq) {
	std::string value_return;
	int len = eq.length();
	std:: string value_int;
	int index = 0;
	for (int i = eq.length() - 1; i >= 0; i--)
	{
		char c = eq[i];
		if (isdigit(eq[i])) {
			value_int = c + value_int;
		}
		else {
			value_int = '|';
		}
		value_return += c;
	}
	for (int i = 0; i < value_return.length(); i++) {
		if (isdigit(value_return[i])) {
			value_return[i] = value_int[index++];
		}
	}

	return value_return;
}

int main()
{
	reversal_equation reversal;
	std::cout << reversal.solve("100*b/y") << std::endl;
	return 0;
}
