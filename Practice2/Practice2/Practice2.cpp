// Practice2.cpp: define el punto de entrada de la aplicación.  
//  

#include "Practice2.h"  
#include "string.h"  
#include <algorithm> 
/**
 * Author: Sac1802
 */


/**
 * @brief Determines whether a person is afraid based on the day and a specific number.
 *
 * This function checks different conditions for each day of the week:
 * - Monday: afraid if number is exactly 12
 * - Tuesday: afraid if number is greater than 95
 * - Wednesday: afraid if number is exactly 34
 * - Thursday: afraid if number is exactly 0
 * - Friday: afraid if the number is even
 * - Saturday: afraid if number is exactly 56
 * - Sunday: afraid if the number is 666 or -666
 *
 * The day input is case-insensitive.
 *
 * @param day The day of the week (e.g., "Monday", "Tuesday").
 * @param num The number to be evaluated.
 * @return true if the condition for fear is met on the given day, false otherwise.
 */
bool am_i_afraid(const std::string& day, int num)  
{  
	std::string lower_day = day;  
	std::transform(lower_day.begin(), lower_day.end(), lower_day.begin(), ::tolower);  
	if (lower_day == "monday" && num == 12) return true;  
	if (lower_day == "tuesday" && num > 95) return true;  
	if (lower_day == "wednesday" && num == 34) return true;  
	if (lower_day == "thursday" && num == 0) return true;  
	if (lower_day == "friday" && (num % 2) == 0) return true;  
	if (lower_day == "saturday" && num == 56) return true;  
	if (lower_day == "sunday" && (num == 666 || num == -666)) return true;  
	return false;  
}  

/**
 * @brief Main function to test the am_i_afraid function.
 *
 * Calls the function with the day "Monday" and number 13.
 * Displays the result in the console.
 *
 * @return Exit code (0 for success).
 */
int main()  
{  
	bool value = am_i_afraid("Monday", 13);  
	std::cout << "Today have afraid: " << value << std::endl;  
	return 0;  
}
