#include <iostream>

void displayStudent(int roll, char name[], int marks) {
    std::cout<< "\n Roll No : " << roll;
    std::cout<< "\n Name : " << name;
    std::cout<< "\n Marks : " << marks<< std::endl ;
}

int main() {
    int roll[5], marks[5], n;
    char names[5][50];

    std::cout << "Enter number of students: ";
    std::cin >> n;

    std::cin.ignore();

    for (int i = 0; i < n; i++) {
        std::cout<< "\nEnter Roll number: ";
        std::cin >>roll[i];

        std::cin.ignore();

        std::cout<< "Enter Name : ";
        std::cin.getline(names[i], 50);

        std::cout << "Enter Mark s: ";
        std::cin >> marks[i];
    }

    std::cout<< "\n ----- Student Details -----\n";

    for (int i = 0; i < n; i++)
        displayStudent(roll[i], names[i], marks[i]);
    return 0;
}