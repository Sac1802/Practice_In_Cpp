// Number_Decending.cpp: Defines the entry point of the application.

#include "Number_Decending.h"
#include <cinttypes>   // For fixed-width integer types like uint64_t
#include <algorithm>   // For std::sort and std::greater
#include <string>      // For std::string and conversions

/**
 * @brief Rearranges the digits of a number to form the highest possible value.
 *
 * This function takes a non-negative integer and returns a new integer
 * formed by sorting its digits in descending order.
 *
 * @param a A non-negative integer.
 * @return The largest number possible from the digits of `a`.
 */
uint64_t descendingOrder(uint64_t a)
{
    // Convert the number to a string for digit manipulation
    std::string str = std::to_string(a);

    // Sort the digits in descending order
    std::sort(str.begin(), str.end(), std::greater<char>());

    // Convert the sorted string back to an integer
    return std::stoull(str);
}

/**
 * @brief Main entry point for the program.
 *
 * Calls descendingOrder with a sample number and prints the result.
 *
 * @return Exit status code.
 */
int main()
{
    // Example input
    uint64_t value = descendingOrder(123456789);

    // Output the result to the console
    std::cout << "Descending Order: " << value << std::endl;

    return 0;
}
