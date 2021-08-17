
#include <iostream>


int main()
{
    std::cout << "Input the expression of type: \nthe first operand \te.g. \"10\" \noperator \t\te.g. \"/\" \nsecond operand \t\te.g. \"2\" \nequal sign \t\te.g. \"=\" \nto calculate, please: " << '\n';
    double first_operand;
    std::cin >> first_operand;
    char operator_;
    std::cin >> operator_;
    double second_operand;
    std::cin >> second_operand;
    char operator_equal;
    std::cin >> operator_equal;
 
    if (operator_equal=='=') {
        if (operator_ == '+') {
            std::cout<< first_operand + second_operand;
        }
        else if (operator_ == '-') {
            std::cout<< first_operand - second_operand;
        }
        else if (operator_ == '*') {
            std::cout << first_operand * second_operand;
        }
        else if (operator_ == '/' && second_operand!=0) {
            std::cout << first_operand / second_operand;
        }
        else if(operator_ == '/' && second_operand == 0) {
            std::cout << "Can not divide by zero!" << '\n';
        }
        else  {
            std::cout<< "Error! Used wrong operator!" << '\n';
        }
    }
    else {
        std::cout << "User use the operator equal to complete the action" << '\n';
    }

    return 0;
}
