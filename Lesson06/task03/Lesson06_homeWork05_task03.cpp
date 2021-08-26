#include <iostream>     
#include <cmath>

int main()
{
  
   
    std::cout << "Input the current coordinates of Knight"<<std::endl;
    
    std::cout << "x1 = " << std::endl;

    int x1;
    std::cin >> x1;

    std::cout << "y1 = " << std::endl;

    int y1;
    std::cin >> y1;

    std::cout << "Input the next coordinates of Knight" << std::endl;

    std::cout << "x2 = " << std::endl;

    int x2;
    std::cin >> x2;

    std::cout << "y2 = " << std::endl;

    int y2;
    std::cin >> y2;


    int dx = abs(x1 - x2);
    int dy = abs(y1 - y2);

    if (dx == 1 && dy == 2 || dx == 2 && dy == 1) {
        std::cout << "Yes.";
    }
    else {
        std::cout << "No.";
    }

   
    return 0;

}




