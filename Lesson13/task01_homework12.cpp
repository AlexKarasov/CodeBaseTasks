#include <iostream>

void PrintArray(char str[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << str[i];
    }
}

char* Encrypt(char str[], int size) {
    char key[] = "ABABAQWE";
   
    for (int i = 0; i < size; i++) {
        str[i] = str[i] ^ key[i];
    }
    return str;
}

char* Decrypt(char str[], int size) {
    char key[] = "ABABAQWE";

    for (int i = 0; i < size; i++) {
        str[i] = str[i] ^ key[i];
    }
    return str;
}

int main()
{

    char str[] = "Hello World!";

    int sizeOfArray = sizeof(str) / sizeof(str[0]);

    std::cout << "Original string: ";
    PrintArray(str, sizeOfArray);

    std::cout << "\nEncrypted string: ";

    Encrypt(str, sizeOfArray);
    PrintArray(str, sizeOfArray);

    std::cout << "\nDecrypted string: ";

    Decrypt(str, sizeOfArray);
    PrintArray(str, sizeOfArray);

    return 0;
}
