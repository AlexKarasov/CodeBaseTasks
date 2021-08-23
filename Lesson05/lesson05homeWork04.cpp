
#include <iostream>

int main()
{
	int arrayOfNumbers[10] = {};

	std::cout << "Input ten numbers to fill the array, please " << '\n';

	for (int numberToInput = 0; numberToInput < 10; numberToInput++) {
		std::cin >> arrayOfNumbers[numberToInput];
	}

	std::cout << "The array contains such numbers " << '\n';

	for (int numberToInput = 0; numberToInput < 10; numberToInput++) {
		std::cout << arrayOfNumbers[numberToInput]<<'\t';
		
	}

    std::cout << '\n';



	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 9; j++) {
			if (arrayOfNumbers[j] < arrayOfNumbers[j + 1]) {
				std::swap(arrayOfNumbers[j], arrayOfNumbers[j + 1]);
			}
		}
	}



	std::cout << "The array contains such numbers after sorting " << '\n';

	for (int numberToInput = 0; numberToInput < 10; numberToInput++) {
		std::cout << arrayOfNumbers[numberToInput]<<'\t';
	}




	return 0; 

}




