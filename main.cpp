/*
 This is a basic calculator
 By Ray, a beginner C++ Developer!
 Please feel free to fix any bugs you find
 Or even improve it!

 If you want your improvement to be implemented
 Feel free to let me know through my email:
 raymurimi13@gmail.com

 IGNORE THIS:
  Cxd = r4Dsjc32DsmcS
*/

#include <iostream>
#include <cmath>

double processOperation(char sign);

int main() {

    char operation;
    
    do {
        std::cout << "Enter your operation (+ , - , / , * , or t to exit) \n";
        std::cin >> operation;

        double answer = processOperation(operation);

        std::cout << "Your answer is: " << answer << "\n";

        return 0;
    } while(operation != 't');
}

double processOperation(char sign) {

    switch (sign)
    {
    case '+':
        double add1;
        double add2;

        std::cout << "Enter the first number: \n";
        std::cin >> add1;

        std::cout << "Enter the last number: \n";
        std::cin >> add2;

        return add1 + add2;
        break;
    
    case '-':
        double sub1;
        double sub2;

        std::cout << "Enter the first number: \n";
        std::cin >> sub1;

        std::cout << "Enter the last number: \n";
        std::cin >> sub2;

        return sub1 - sub2;
        break;

    case '/':
        double div1;
        double div2;

        std::cout << "Enter the first number: \n";
        std::cin >> div1;

        std::cout << "Enter the last number: \n";
        std::cin >> div2;

        return div1 / div2;
        break;

    case '*':
        double mult1;
        double mult2;

        std::cout << "Enter the first number: \n";
        std::cin >> mult1;

        std::cout << "Enter the last number: \n";
        std::cin >> mult2;

        return mult1 * mult2;
        break;

    default:
        std::cout << "Invalid operation!\n";
    }
}