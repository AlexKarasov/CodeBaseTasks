
using namespace std;
#include <iostream>

int main()
{


	int l = 0;
	for (int i = 0; i < 4; i++) {

		for (int j = 5; j - i > 0; j--) {
			std::cout << ' ';
		}
		std::cout << '/';

		if (i == 3) {
			for (int m = 0; m < 6; m++) {
				std::cout << '-';
			}
		}
		else {
			for (int k = 0; k < l; k++) {

				std::cout << ' ';
			}
		}
		l += 2;
		std::cout << '\\' << '\n';
		}

	std::cout << " /";


	for (int i = 0; i < 7; i++) {




		if (i == 0) {
			std::cout << " |";
			for (int n = 0; n < 4; n++) {
				std::cout << ' ';
			}
			std::cout << "|";
			std::cout << " \\"<<'\n';
		}
		else {

			std::cout << "   |";
			for (int b = 0; b < 4; b++) {
				std::cout << ' ';
			}

			std::cout << '|' << '\n';
		}
	}
	std::cout << "   |";
	for (int v = 0; v < 4; v++) {
		std::cout << '_';
	}
	std::cout << '|' << '\n';


		return 0;
}

