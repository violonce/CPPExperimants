//
//  main.cpp
//  CPPCalculator
//
//  Created by Илья on 08.08.2026.
//

#include <iostream>
#include <time.h>

using namespace std;

int main() {
    
//    float num1, num2, res;
//    cout << "Enter num1: ";
//    cin >> num1;
//    cout << "Enter num2: ";
//    cin >> num2;
//    
//    //+, -, *, /
//    char math;
//    cout << "Enter math sumbol: ";
//    cin >> math;
    
/*    if (math == '+')
        res = num1 + num2;
    else if (math == '-')
        res = num1 - num2;
    else if (math == '*')
        res = num1 * num2;
    else if (math == '/') {
        res = num1 / num2;
    } else {
        res = 0.0;
        std::cout << "Wrong math symbol, enter \"+, -, *, /\"";
        main();
    }*/
    
//    switch (math) {
//        case '+':
//            res = num1 + num2;
//            break;
//        case '-':
//            res = num1 - num2;
//            break;
//        case '*':
//            res = num1 * num2;
//            break;
//        case '/':
//            res = num1 / num2;
//            break;
//        default:
//            res = 0.0;
//            cout << "Wrong math symbol, enter \"+, -, *, /\"" << endl;
//            main();
//            break;
//    }
//    
//    cout << "Result: " << res << endl;
//    
//    //----------
//    int a = 10, b = 3, z;
//    z = a % b;
//    std::cout << z;
//    
//    //short operations
//    a = a + 5;
//    a += 5;
//    a++;
//    a--;
    
    //random
    srand(time(NULL));
    int result = 1 + rand() % 20;
    cout << result << endl;
    
    return EXIT_SUCCESS;
}
