// practice_recursive.cpp: define el punto de entrada de la aplicación.
//

#include "practice_recursive.h"

#include <iostream>
#include <vector>

/**
 * @brief Recursively calculates the sum of a vector's elements.
 *
 * This function takes a vector of integers and an integer `length`,
 * and recursively sums the elements from position `length - 1` to 0.
 *
 * @param steps A vector of integers to be summed.
 * @param length The number of elements to consider from the end of the vector.
 * @return int The sum of the specified elements.
 */
int recursive_algorithm(const std::vector<int>& steps, int length) {
    // Base case: if the length is 0, no elements left to add.
    if (length == 0) return 0;

    // Get the current element (position length - 1).
    int number = steps[length - 1];

    // Add the current element to the result of the recursive call.
    return number + recursive_algorithm(steps, length - 1);
}

int main() {
    // Declare the test vectors with different values
    std::vector<int> test = { 3, -2, 4, -1, 2 };
    std::vector<int> test2 = { 1, -1, 1 };
    std::vector<int> test3 = { -1, -2, -3, -4 };

    // Get the length of each test vector
    int length = test.size();
    int length2 = test2.size();
    int length3 = test3.size();

    // Store the result of the recursive algorithm for each test case
    int result = recursive_algorithm(test, length);
    int result2 = recursive_algorithm(test2, length2);
    int result3 = recursive_algorithm(test3, length3); // Expected: -10

    // Print the final results
    std::cout << "Lucas's final position of result1 is " << result << std::endl;
    std::cout << "Lucas's final position of result2 is " << result2 << std::endl;
    std::cout << "Lucas's final position of result3 is " << result3 << std::endl;

    return 0;
}
