//
//  main.cpp
//  CPlusOperators
//
//  Created by Илья on 06.08.2026.
//

#include <iostream>

int main() {
    
    int num;
    
    std::cout << "Enter value:" << std::endl;
    std::cin >> num;
    
    bool is_has_car = true;
    if ( num >= 3 && is_has_car == true) {
        std::cout << "Value lagest" << std::endl;
        if (num == 5) {
            std::cout << "Value is " << num << std::endl;
        }
    } else if ( num <=0 ) {
        std::cout << "Value is -  " << num << std::endl;
    }
    
    std::cout << "Value: " << num << std::endl;
    
    int num1;
    std::cin >> num1;
    switch (num1) {
        case 5:
            std::cout << "Num1 is 5";
            break;
    }
    
    return EXIT_SUCCESS;
}
