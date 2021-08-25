#include <iostream>                      

int main()                                  
{			

	const int length = 6;

	int array[length] = { 10, 2, -1, 4, 8, -7 };

	for (int arrayCounter = 0; arrayCounter < length; arrayCounter++) {

		std::cout << *(array + arrayCounter) <<'\t';

	}

	std::cout << std::endl;

	for (int reverse = 0; reverse < length/2; reverse++) {

		int buffer = *(array + reverse);
		*(array + reverse) = *(array + length - 1 - reverse);             
		*(array + length - 1 - reverse) = buffer;

	}

	for (int output = 0; output < length; output++) {

		std::cout << *(array + output) <<'\t';

	}
	
	return 0;								
}                                           




