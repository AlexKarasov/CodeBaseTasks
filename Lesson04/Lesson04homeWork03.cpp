#include <iostream>

int main()
{
    const int roof_level = 5;
    int height;

    next_try:

    std::cout << "Input the height of building, please " << std::endl;
    std::cin >> height;

    for (int roof_level_counter = 0; roof_level_counter < roof_level * height; roof_level_counter++) {
        for (int roof_left_space = roof_level * height - roof_level_counter; roof_left_space > 0; roof_left_space--) {
            std::cout << " ";
        }
        std::cout << "/";
        if (roof_level_counter != roof_level * height - 2 && roof_level_counter != roof_level * height - 1) {
            for (int roof_middle_space = roof_level_counter * 2; roof_middle_space > 0; roof_middle_space--) {
                std::cout << " ";

            }
        }
        else if (roof_level_counter == roof_level * height - 2) {
            for (int roof_middle_space = roof_level_counter * 2; roof_middle_space > 0; roof_middle_space--) {
                std::cout << "-";

            }

        }
        else if (roof_level_counter == roof_level * height - 1) {
            std::cout << " |";
            
            for (int roof_middle_space = roof_level_counter * 2; roof_middle_space > 4; roof_middle_space--) {
                std::cout << " ";
            }
            std::cout << "| ";
        }


        std::cout << "\\" << std::endl;

    }
    
    int wall_level = 7 * height;

    for (int wall_level_counter = 0; wall_level_counter < wall_level; wall_level_counter++) {

        for (int wall_left_space = 0; wall_left_space < 3; wall_left_space++) {
            std::cout << " ";
        }

        std::cout << "|";
        if (wall_level_counter != wall_level-1) {
            for (int wall_middle_space = 0; wall_middle_space < ((roof_level * height) -3 ) * 2; wall_middle_space++) {

                std::cout << " ";
            }
        }
        else {
            for (int wall_middle_space = 0; wall_middle_space < ((roof_level * height) - 3) * 2; wall_middle_space++) {

                std::cout << "_";
            }
        }

        std::cout << "|" << std::endl;

    }

    goto next_try;
}


