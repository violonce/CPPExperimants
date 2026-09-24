//
//  main.cpp
//  CPlusExample
//
//  Created by Илья on 05.08.2026.
//

#include <iostream>

int main() {
//    int num = -45;
//    num = 3;
//    std::cout << "Count: " << num  ;
//    
//    int a, b;
//    std::cout << "Enter value a: ";
//    std::cin >> a;
//    std::cout << "Enter value b: ";
//    std::cin >> b;
//    
//    std::cout << "A: " << a << ". B: " << b;
    
    //В
    short num1 = 7; // 2 byte / 16 bit / -32k : 32K
    int num2 = 5; /* 4 byte / 32 bit / INT_MIN = -2147483648
    INT_MAX = 2147483647*/
    long num3 = 5; /* 8 byte / 64 bit / INT_MIN = -9223372036854775808
    INT_MAX = 9223372036854775807*/
    std::cout << "LONG_MIN = " << LONG_MIN << '\n';
    std::cout << "LONG_MAX = " << LONG_MAX << '\n';
    
    unsigned short num4 = 7; // 2 byte / 16 bit / -32k : 32K
    unsigned int num5 = 5; /* 4 byte / 32 bit / INT_MIN = -2147483648
    INT_MAX = 2147483647*/
    unsigned long long num6 = 5; int64_t num7 = 5; /* 8 byte / 64 bit / INT_MIN = -9223372036854775808
    INT_MAX = 9223372036854775807*/
    
    //float
    float fl = 5.56789f;
    double db = 5.76547867548f;
    
    //char
    char sym = '$';
    
    //bool
    bool isHappy = 43;
    
    return 0;
}
