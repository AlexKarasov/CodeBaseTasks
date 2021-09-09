#include <iostream>

int main()
{
    char str[] = "hello";

    int sizeOfArray = sizeof(str) / sizeof(str[0]);

    for (int i = 0; i < sizeOfArray - 1; i++) {
        
      std::cout<<static_cast<char>(str[i]-32);

    }

    return 0;
}
