#include <iostream>

int main()
{
    char firstTestString[] = "i am simple string for changing";

    int sizeOfArray1 = sizeof(firstTestString) / sizeof(firstTestString[0]);

    int space = 32;

    int differenceForConverting = 32;
    // converting from lowercase to uppercase 
    for (int index = 0; index < sizeOfArray1 - 1; index++) {

        if (firstTestString[index] != ' ' && firstTestString[index] != '\0') {

           std::cout << static_cast<char>(firstTestString[index] - differenceForConverting);

        } else if (firstTestString[index] == ' ') {

            std::cout << static_cast<char>(firstTestString[index] = space);

        } else {
            break;
        }
    }

    char secondTestString[] = "i am simple string for changing";

    int sizeOfArray2 = sizeof(secondTestString) / sizeof(secondTestString[0]);

    // checks if it's lower case 
    bool flag = true;
    int A = 65;
    int Z = 90;

    for (int index = 0; index < sizeOfArray2 - 1; ++index) {
        if(static_cast<int>(secondTestString[index]) == space){
            continue;
        } else if (static_cast<int>(secondTestString[index]) >= A && static_cast<int>(secondTestString[index]) <= Z) {
            flag = false;
        }
        
    }
 
    if (flag) {
        std::cout << "\nThe string is lowercase\n";
    }
    else {
        std::cout << "\nString is not lowercase\n";
    }

    char thirdTestString[] = "i am simple string for changing";

    int sizeOfArray3 = sizeof(thirdTestString) / sizeof(thirdTestString[0]);
    int a = 97;
    int z = 122;

    for (int index = 0; index < sizeOfArray3 - 1; index++) {

        if (index == 0) {

            if (static_cast<int>(thirdTestString[index]) >= a && static_cast<int>(thirdTestString[index]) <= z) {

                std::cout << static_cast<char>(thirdTestString[index] - differenceForConverting);
                continue;
            }
           
        }

        if (thirdTestString[index] == ' ') {
           
            std::cout << " ";
            
            index++;
            
            if (int(thirdTestString[index]) >= 97 && int(thirdTestString[index]) <= 122) {

                std::cout << static_cast<char>(thirdTestString[index] - 32);
                continue;
            }
        } 
        else  
        {
            if (static_cast<int>(thirdTestString[index]) >= a && static_cast<int>(thirdTestString[index]) <= z) {
                std::cout <<thirdTestString[index];
            }
        }

    }

    return 0;
}
