

#include <iostream>

int main()
{
    std::cout << "Input the expression to calculate in the following format:\nthe first operand \te.g. \"10\"\nthe operator \t\te.g. \"/\"\nthe second operand\te.g. \"2\"\nthe equal sign \t\te.g. \"=\"" << '\n';
    
    double first_operand;
    std::cin >> first_operand;
    char operator_;
    std::cin >> operator_;
    double second_operand;
    std::cin >> second_operand;
    
    char equal_sign;
    std::cin >> equal_sign;

    if (equal_sign == '=') {
        switch (operator_)
        {
        case '+':
            std::cout << first_operand + second_operand;
            break;

        case '-':
            std::cout << first_operand - second_operand;
            break;
        
        case '*':
            std::cout << first_operand * second_operand;
            break;
        case '/':
            if (second_operand != 0) {
                std::cout << first_operand - second_operand;
            }
            else {
                std::cout << "Error! Can not divide by zero!" << '\n';
            }
            break;
        default:
            std::cout << "Error! Wrong operator used!" << '\n';
            break;
        }
    }
    else {
        std::cout << "Error! To perform the calculation use equal sign \"=\" after expression" << '\n';
    }

    return 0;
}




