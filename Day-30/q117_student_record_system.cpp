#include <iostream>

int main() {
    int roll[5], marks[5], n;
    char names[5][50];

    std::cout<< "Enter number of students : ";
    std::cin>> n;

    std::cin.ignore();

    for (int i = 0; i < n; i++) {
        std::cout<< "\nEnter Roll Number : ";
        std::cin >>roll[i];

        std::cin.ignore();

        std::cout<< "Enter Name: ";
        std::cin.getline(names[i], 50);

        std::cout<< "Enter Marks: ";
        std::cin>> marks[i];
    }

    std::cout << "\n----- Student Records -----\n";

    for (int i = 0; i < n; i++) {
        std::cout<< "Roll No: " << roll[i] << "\n Name : " << names[i]<< "\n Marks : " << marks[i] << "\n\n" ;
    }
    return 0;
}