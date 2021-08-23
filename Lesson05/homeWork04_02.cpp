
#include <iostream>

int main()
{
	const int lengthOfArray = 10;
	int arrayOfNumbers[lengthOfArray] = {};

	std::cout << "Input ten numbers to fill the array, please " << '\n';

	for (int numberToInput = 0; numberToInput < lengthOfArray; numberToInput++) {
		std::cin >> arrayOfNumbers[numberToInput];
	}

	std::cout << "The array contains such numbers " << '\n';

	for (int numberToInput = 0; numberToInput < lengthOfArray; numberToInput++) {
		std::cout << arrayOfNumbers[numberToInput]<<'\t';
		
	}

    std::cout << '\n';



	for (int i = 0; i < lengthOfArray; i++) {
		for (int j = 0; j < lengthOfArray-1; j++) {
			if (arrayOfNumbers[j] < arrayOfNumbers[j + 1]) {
				std::swap(arrayOfNumbers[j], arrayOfNumbers[j + 1]);
			}
		}
	}



	std::cout << "The array contains such numbers after sorting " << '\n';

	for (int numberToInput = 0; numberToInput < lengthOfArray; numberToInput++) {
		std::cout << arrayOfNumbers[numberToInput]<<'\t';
	}




	return 0; 

}




