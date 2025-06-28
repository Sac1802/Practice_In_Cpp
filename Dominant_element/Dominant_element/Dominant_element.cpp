/**
 * @file Dominant_element.cpp
 * @author Sac1802
 * @date 2025-06-28
 * @brief Implementation of a function that finds all dominant elements in an array.
 *
 * An element is dominant if it is strictly greater than all elements to its right.
 * This solution iterates from right to left, checking for dominance and storing results.
 */

#include "Dominant_element.h"
#include <vector>
#include <algorithm>
#include <iostream>

 /**
  * @brief Finds all dominant elements in a given array.
  *
  * An element is considered dominant if it is strictly greater than all elements
  * to its right. The last element is always dominant. The function traverses
  * the array from right to left and collects dominant elements in reverse,
  * then reverses the result to maintain original ordering.
  *
  * @param array A vector of positive integers.
  * @return A vector containing all dominant elements in original order.
  *
  * @example
  * solve({1, 21, 4, 7, 5}) returns {21, 7, 5}
  */
std::vector<int> solve(std::vector<int> array) {
	std::vector<int> result_value;

	for (int i = array.size() - 1; i >= 0; i--) {
		int value_compare = array[i];
		bool has_greater_right = false;

		// Check all elements to the right of the current element
		for (int j = i + 1; j < array.size(); j++) {
			if (array[j] >= value_compare) {
				has_greater_right = true;
				break;
			}
		}

		// If no greater or equal element was found to the right, it's dominant
		if (!has_greater_right) {
			result_value.push_back(value_compare);
		}
	}

	// Reverse the result to match the original order
	std::reverse(result_value.begin(), result_value.end());
	return result_value;
}

/**
 * @brief Main function for testing the dominant element finder.
 *
 * Uses a sample vector {1, 21, 4, 7, 5} and prints the dominant elements.
 */
int main() {
	std::vector<int> test = { 1, 21, 4, 7, 5 };
	std::vector<int> res = solve(test);

	std::cout << "Dominant elements: ";
	for (int val : res) {
		std::cout << val << " ";
	}
	std::cout << std::endl;

	return 0;
}
