#include <iostream>                      

int main()
{

    const int rows = 3;
    const int columns = 4;

    int twoDimensionalArray[rows][columns] = {
    {28, 11, 7, 0},
    {11, 2, 8, 28},
    {2, 7, 11, 8}
    };

    int* flatArray = (int*)twoDimensionalArray;

    const int length = rows * columns;

    std::cout << "One-dimensional array before the search of unique number: \n"<<std::endl;

    for (int output = 0; output < length; output++) {
        std::cout << * (flatArray + output) << '\t';
    }

    std::cout <<'\n' << std::endl;

    for (int externalCounter = 0; externalCounter < length; externalCounter++) {

        bool flag = false;

        for (int internalCounter = 0; internalCounter < length; internalCounter++) {

            if (externalCounter == internalCounter) {
                continue;
            }

            if (*(flatArray + externalCounter) == *(flatArray + internalCounter) && externalCounter != internalCounter) {
                flag = true;
            }

        }
        if (!flag) {
            std::cout << "The unique number is: " << *(flatArray + externalCounter) << std::endl;
        }

    }

    return 0;

}




