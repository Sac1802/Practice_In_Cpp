// PracticeOfC++.cpp: Defines the application entry point.
//
// Author: Sac1802
// Description:
// This program takes an integer and formats it into a fixed-width string of 5 characters,
// padding it with leading zeros if necessary. The output follows the format: "Value is XXXXX".

#include "PracticeOfC++.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

/**
 * @brief Formats an integer into a 5-character string with leading zeros.
 *
 * @param n Input integer.
 * @return string Returns the formatted string as "Value is XXXXX".
 */

string solition2(int n) {
	std::string result = std::to_string(n);
    std::string resultPtr = "00000";  // Initialize with zeros.
    size_t index = 0;
    int i = result.size();
    // Copy values from 'result' into 'resultPtr', right-aligned.
    while (result.size() > i - 1) {
        resultPtr[5 - i] = result[index];
        index++;
        i--;
    }
	return "Value is " + resultPtr;
}


/**
 * @brief Alternative method to format an integer into a 5-character string with leading zeros.
 *
 * @param n Input integer.
 * @return string Returns the formatted string as "Value is XXXXX".
 */
string solution(int n) {
  std::string result = std::to_string(n);
  std::string resultPtr[5] = {};  // Initialize as an empty array.
  size_t index = 0;
  int i = result.size();

  // Ensure the array is initialized with zeros.
  if (resultPtr->empty()) {
      for (int j = 0; j < 5; j++) {
          resultPtr[j] = "0";
      }
  }

  // Copy number values into the array.
  while (result.size() > i - 1) {
      resultPtr[5 - i] = result[index];
      index++;
      i--;
  }
  // Convert array to a single string.
  std::ostringstream oss;
  for (const auto& str : resultPtr) {
      oss << str;
  }
  std::string values_final = "Value is " + oss.str();
  return values_final;
}


/**
 * @brief Main entry point of the program.
 *
 * Runs formatting functions on different test numbers.
 * Prints the expected output to verify functionality.
 */
int main()
{
  std::string value = solution(5);
  std::string value2 = solution(123);
  std::string value3 = solution(98765);
  cout << value << endl;
  cout << value2 << endl;
  cout << value3 << endl;
  cout << "----------------------------" << endl;
  std::string value4 = solition2(5);
  std::string value5 = solition2(123);
  std::string value6 = solition2(98765);
  cout << value4 << endl;
  cout << value5 << endl;
  cout << value6 << endl;
  return 0;
}
