// Case_Sensitive.cpp: define el punto de entrada de la aplicación.  
//  

#include "Case_Sensitive.h"  
/**
 * Author: Sac1802.
 */

using namespace std;  

/**
 * @brief Checks if all letters in the input string are lowercase.
 *        Returns a pair containing a boolean and a vector of characters.
 *
 * @param str Input string to evaluate.
 * @return std::pair<bool, std::vector<char>>
 *         - bool: true if all letters are lowercase, false otherwise.
 *         - vector<char>: list of characters that are not lowercase, in order of appearance.
 */
std::pair<bool, std::vector<char>> CaseSensitiveClass::case_Sensitive(const std::string& str) {
	std::vector<char> value_final;
	bool response_final = true;
	for (char c: str) {
		if (!std::isalpha(c)) continue;
		if (!std::islower) {
			response_final = false;
			value_final.push_back(c);
		}
	}
	return { response_final, value_final };
}

/**
 * @brief Checks if all letters in the input string are lowercase.
 *        Returns a pair containing a boolean and a vector of characters.
 *
 * @param str Input string to evaluate.
 * @return std::pair<bool, std::vector<char>>
 *         - bool: true if all letters are lowercase, false otherwise.
 *         - vector<char>: list of characters that are not lowercase, in order of appearance.
 */
std::pair<bool, std::vector<char>> CaseSensitiveClass::case_Sensitive(const std::string& str) {  
	std::vector<char> value_final;
	bool response_final = true;
	for (size_t i = 0; i < str.length(); i++) {
		if (!std::isalpha(str[i])) continue;
		if (str[i] < 'a' || str[i] > 'z') {
			response_final = false;
			value_final.push_back(str[i]);
		}
	}
	return {response_final, value_final};
}  

/**
 * @brief Entry point of the application demonstrating the case_Sensitive function.
 *
 * @return int Program exit status.
 */
int main()  
{  
	std::string test = "codeWaRs";
	CaseSensitiveClass caseSensitive;
	auto result = caseSensitive.case_Sensitive(test);

	std::cout << std::boolalpha << "All lowercase? " << result.first << "\n";
	std::cout << "Non-lowercase characters: ";
	for (char c : result.second) {
		std::cout << c << " ";
	}
	std::cout << "\n";
	return 0;
}
