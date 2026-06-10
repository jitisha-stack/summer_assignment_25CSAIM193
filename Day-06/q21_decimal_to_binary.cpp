#include <iostream>
int main() {
    int dnum ;
    std::cout<<"Enter a decimal number: " ;
    std::cin>> dnum ;

    int binary[40];
    int i = 0 ;
    if (dnum == 0) {  //in case for 0
        std::cout<< "Binary = 0";
        return 0;
    }

    //convert decimal to binary
    while (dnum > 0) {
        binary[i] = dnum % 2;
        dnum /= 2;
        i++;
    }
    std::cout << "Binary number = ";

    //print binary numbers in reverse order
    for (int j = i - 1; j >= 0; j--) {
        std::cout <<binary[j] ;
    }
    return 0;
}