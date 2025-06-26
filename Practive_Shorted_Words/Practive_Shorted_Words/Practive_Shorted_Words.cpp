// Practive_Shorted_Words.cpp: Defines the entry point for the application.

#include "Practive_Shorted_Words.h"
#include <iostream>
#include <sstream>
#include <vector>
#include <string>
#include <limits>

/**
 * @brief Finds the length of the shortest word in a string.
 *
 * This implementation uses std::istringstream to tokenize the string
 * based on whitespace. It tracks the shortest word length using
 * std::numeric_limits<int>::max() as the initial value.
 *
 * @param str A space-separated string of words.
 * @return The length of the shortest word.
 */
int find_short_second(std::string str) {
    std::istringstream ss(str);           // Create a string stream from the input
    std::string token;                    // Temporary variable to store each word
    int value_final = std::numeric_limits<int>::max();  // Initialize with max int value

    // Loop through each word in the stream
    while (ss >> token) {
        int len = static_cast<int>(token.size());       // Get word length
        if (len < value_final) {
            value_final = len;                          // Update shortest length
        }
    }

    return value_final;  // Return the shortest word length found
}

/**
 * @brief Finds the length of the shortest word in a string.
 *
 * This version manually splits the input string using std::getline()
 * and a space character as delimiter, then stores words in a vector.
 * It then loops through the vector to determine the shortest word.
 *
 * @param str A space-separated string of words.
 * @return The length of the shortest word.
 */
int find_short(std::string str) {
    std::vector<std::string> list_tokens;   // Vector to store words
    std::stringstream ss(str);              // Convert input to stringstream
    std::string value;

    // Split the string by space and store each word
    while (std::getline(ss, value, ' ')) {
        list_tokens.push_back(value);
    }

    // If no words found, return 0; otherwise initialize with the size of the first word
    int value_final = list_tokens.empty() ? 0 : static_cast<int>(list_tokens[0].size());
    int index = 0;

    // Iterate over the list starting from the second word
    for (size_t i = 1; i < list_tokens.size(); i++) {
        if (list_tokens[i].size() < list_tokens[index].size()) {
            index = static_cast<int>(i);                          // Update index of the shortest word
            value_final = static_cast<int>(list_tokens[i].size()); // Update shortest length
        }
    }

    return value_final;  // Return the shortest word length
}

/**
 * @brief Main entry point of the program.
 *
 * Tests both implementations using the same input string and prints the results.
 *
 * @return Exit code.
 */
int main()
{
    // Test first implementation
    int values_final = find_short("bitcoin take over the world maybe who knows perhaps\n");
    std::cout << "The shortest word length is: " << values_final << std::endl;

    // Test second implementation
    int values_final2 = find_short_second("bitcoin take over the world maybe who knows perhaps");
    std::cout << "The shortest word length is: " << values_final2 << std::endl;

    return 0;
}