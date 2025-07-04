// Driving_School.cpp: define el punto de entrada de la aplicación.
//

#include "Driving_School.h"
#include <cmath>

/**
 * @brief Calculates the total cost of a driving lesson based on its duration in minutes.
 *
 * The pricing rules are:
 * - First 60 minutes cost $30.
 * - Any additional time is charged at $10 per 30-minute block.
 * - A grace period of 5 minutes applies per 30-minute block, meaning:
 *   If a block is not completed by more than 5 minutes, it is not charged.
 *
 * @param n Total duration of the lesson in minutes (> 0).
 * @return Total cost in dollars.
 */
static unsigned cost(unsigned n) {  
	int value_return = 30, value_rest = 0, blocks = 0;  
	if (n > 60) {  
		value_rest = n - 60;
		if (value_rest <= 5) return value_return;
		while (value_rest > 5) {
			value_rest -= 30;
			blocks++;
		}
		value_return = 30 + (10 * blocks);
	}  

	return value_return;  
}

int main()
{
	int value = cost(273);
	std::cout << "Value: ." << value << std::endl;
	return 0;
}
