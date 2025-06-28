// Dominant_element.cpp: define el punto de entrada de la aplicación.
//

#include "Dominant_element.h"
#include <vector>
#include <algorithm>

std::vector<int> solve(std::vector<int> array) {
	std::vector<int> result_value; 
	for (int i = array.size() - 1; i >= 0; i--) {
		int value_compare = array[i];
		bool has_greater_right = false;

		for (int j = i + 1;j < array.size(); j++) {
			if (array[j] >= value_compare) {
				has_greater_right = true;
				break;
			}
		}
		if (!has_greater_right) result_value.push_back(value_compare);
	}
	std::reverse(result_value.begin(), result_value.end());
	return result_value;
}


int main()
{
	std::vector<int> test = { 1, 21, 4, 7, 5 };
	std::vector<int> res = solve(test);

	for (int val : res) {
		std::cout << val << " ";
	}
	std::cout << std::endl;

	return 0;
}
