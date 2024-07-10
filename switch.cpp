#include <iostream>


void oddstars();


int main() {


    oddstars();
}


void oddstars() {
    for (int i = 1; i <= 6; i++) { 
        if (i <= 6) {
            switch (i) 
            {
            case 1:
                std::cout << "      ";
                break;
            case 2:
                std::cout << "     ";
                break;
            case 3:
                std::cout << "    ";
                break;
            case 4:
                std::cout << "   ";
                break;
            case 5:
                std::cout << "  ";
                break;
            case 6: 
                std::cout << " ";
                break;

            } 

        }

        for (int x = 1; x <= i * 2 - 1; x++) { 
            std::cout << "*";

        }
        std::cout << std::endl; 
    }
    
}



