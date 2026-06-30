#include <iostream>

int main() {
    int choice;
    float num1, num2, result;

    std::cout<< "Enter first number : " ;
    std::cin  >> num1;

    std::cout << "Enter second number: ";
    std::cin >> num2;

    std::cout <<" \n----- Calculator Menu ----- \n";
    std::cout <<"1. Addition \n" ;
    std::cout << "2. Subtraction \n";
    std::cout << "3. Multiplication \n";
    std::cout <<"4. Division \n" ;

    std::cout << "Enter your choice: ";
    std::cin >> choice;

    switch (choice) {
        case 1:
            result = num1 + num2;
            std::cout << "Result = " << result;
            break;

        case 2:
            result = num1 - num2;
            std::cout << "Result = " << result;
            break;

        case 3:
            result = num1 * num2;
            std::cout << "Result = " <<result;
            break ;

        case 4 :
            if(num2 != 0)
                std::cout<< "Result = " << num1 / num2;
            else
                std::cout <<"Division by zero not possible  ";
            break ;

        default:
            std::cout << "Invalid Choice" ;
    }
    return 0;
}