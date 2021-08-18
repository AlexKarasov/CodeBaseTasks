

#include <iostream>

int main()
{
    std::cout << "Input the expression to calculate in the following format:\nthe first operand \te.g. \"10\"\nthe operator \t\te.g. \"/\"\nthe second operand\te.g. \"2\"\nthe equal sign \t\te.g. \"=\"" << '\n';
    
    double first_operand;
    std::cin >> first_operand;

    char operator_;
    double second_operand;

    do {
       
        std::cin >> operator_;
        if (operator_ == '=')
            break;
        
        std::cin >> second_operand;
             
        switch (operator_)
        {
            
        case '+':
           first_operand = first_operand + second_operand;
           break;
         
        case '-':
            first_operand = first_operand - second_operand;
            break;
        
        case '*':
            first_operand = first_operand * second_operand;
            break;
        case '/':
            if (second_operand != 0) {
                first_operand = first_operand / second_operand;
            }
            else {
                std::cout << "Error! Can not divide by zero!" << '\n';
            }
            break;
                    
        default:
            std::cout << "Error! Wrong operator used!" << '\n';
            break;
        }
        
    } while(1);

    double result = 0;
    result = first_operand;
    std::cout << result << '\n';
  
   
    return 0;
}




