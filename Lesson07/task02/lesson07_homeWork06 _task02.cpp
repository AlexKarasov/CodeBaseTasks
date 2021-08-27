

#include <iostream>

int main()
{
	const int lenght = 9;

	int flatArray[lenght] = { -2, 1, - 3, 4, - 1, 2, 1, - 5, 4 };

	std::cout << "The initial sequence is: \n" << std::endl;

	for (int initialOutput = 0; initialOutput < lenght; initialOutput++) {
		std::cout << flatArray[initialOutput] << '\t';
	}

	std::cout << '\n' << std::endl;

	int maxSubSeq = flatArray[0];
	int sum = 0;

	for (int sumCounter = 0; sumCounter < lenght; sumCounter++) {
		sum += flatArray[sumCounter];
		maxSubSeq = std::max(maxSubSeq, sum);
		sum += std::max(sum, 0);
	}
	
	std::cout << "The max sum of subsequence is: \n" << std::endl;
	std::cout << maxSubSeq;
	

	return 0;
}




