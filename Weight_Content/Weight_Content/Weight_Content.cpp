// Weight_Content.cpp: define el punto de entrada de la aplicación.  
//  

#include "Weight_Content.h"  

/**
 * @brief Calculates the weight of the contents inside a bottle, based on the total weight and
 *        a verbal scale indicating how much larger or smaller the contents are relative to the empty bottle.
 *
 * The scale string must be in the format: "<number> times larger" or "<number> times smaller".
 * The result is returned as an integer and decimals are truncated, as required by the kata.
 *
 * @param bottle_weight Total weight of the bottle (bottle + contents).
 * @param scale A string describing how the content weight compares to the bottle weight.
 *              Example: "5 times larger" or "3 times smaller".
 *
 * @return int The weight of the contents only (truncated to integer).
 */

int WeightContent::content_weight(int bottle_weight, std::string scale)  
{  
	std::vector<std::string> scale_vector;
	std::stringstream ss(scale);
	std::string world;
	int content_weight = 0;
	while (ss >> world)
	{
		scale_vector.push_back(world);
	}
	if (scale_vector.size() != 3) return 0;
	int scale_factor = std::stoi(scale_vector[0]);
	if (scale_vector[2] == "larger") {
		content_weight = (bottle_weight / (scale_factor + 1)) * scale_factor;
	}
	else if (scale_vector[2] == "smaller") {
		double a = 1.0 * (1.0 + (1.0 / scale_factor));
		float b = bottle_weight / a;
		content_weight = b / scale_factor;
	}
	return content_weight;  
}  

/**
 * @brief Sample main to test the content_weight function with a fixed input.
 */
int main()  
{  
	WeightContent weight;
	int scale_factor = weight.content_weight(195, "5 times larger");
	std::cout << "The Value final is: " << scale_factor << std::endl;
	return 0;  
}
