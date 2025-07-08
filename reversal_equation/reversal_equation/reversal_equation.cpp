// reversal_equation.cpp: define el punto de entrada de la aplicación.
//

#include "reversal_equation.h"

/**
 * @brief Reverses the order of a mathematical equation while preserving the structure of numbers.
 *
 * Given a mathematical expression (as a string) containing digits, letters, and operators (*, /, +, -),
 * this function returns a new string where the expression is reversed logically,
 * but multi-digit numbers remain in the correct order.
 *
 * Example:
 *   Input:  "100*b/y"
 *   Output: "y/b*100"
 *
 * @param eq The input mathematical equation to reverse.
 * @return A reversed version of the equation with numbers preserved as complete units.
 */
std::string reversal_equation::solve(std::string eq) {
	std::string value_return;
	std::string value_int;
	std::string value_temp;
	int index = 0;

	for (int i = eq.length() - 1; i >= 0; i--) {
		char c = eq[i];
		if (isdigit(c)) {
			value_temp = c + value_temp;
			value_return += c;
		}
		else {
			if (!value_temp.empty()) {
				value_int += value_temp + '|';
				value_temp.clear();
			}
			value_return += c;
		}
	}

	if (!value_temp.empty()) {
		value_int += value_temp + '|';
	}

	for (int i = 0; i < value_return.length(); i++) {
		if (isdigit(value_return[i])) {
			if (isdigit(value_int[index])) {
				value_return[i] = value_int[index++];
			}
			else {
				index++;
				i--;
			}
		}
	}

	return value_return;
}


/**
 * @brief Entry point to test the reversal_equation::solve function.
 */
int main()
{
	reversal_equation reversal;
	std::cout << reversal.solve("100*b/y") << std::endl;
	return 0;
}
