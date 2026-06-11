#include <iostream>
//function to find maximum of two numbers
int max(int a, int b){
    if (a > b)
        return a;
    else
        return b;
}

int main(){
    int num1, num2;
    std::cout << "Enter two numbers: ";
    std::cin >> num1 >> num2;
    std::cout << "Maximum = " << max(num1, num2);
    return 0;
}