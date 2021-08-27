

#include <iostream>

int main()
{
	const int length = 9;

	int flatArray[length] = { 0, -5, 9, 8, 0, 0, 0, 4, 0 };

	std::cout << "The initial sequence is: \n" << std::endl;

	for (int outputElement = 0; outputElement < length; outputElement++) {
		std::cout << flatArray[outputElement] << '\t';
	}

	for (int externalCounter = 0; externalCounter < length; externalCounter++) {
		
		for (int internalCounter = 0; internalCounter < length - 1; internalCounter++) {
			if (flatArray[internalCounter] == 0 && flatArray[internalCounter + 1] != 0) {
				std::swap(flatArray[internalCounter], flatArray[internalCounter + 1]);
			}
		}
	}

	std::cout<<std::endl;

	std::cout << "The sorted sequence is: \n" << std::endl;

	for (int sortedOutput = 0; sortedOutput < length; sortedOutput++) {
		std::cout << flatArray[sortedOutput] << '\t';
	}

	return 0;
}




