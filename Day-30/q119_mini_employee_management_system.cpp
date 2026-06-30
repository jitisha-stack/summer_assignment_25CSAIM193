#include <iostream>

int main() {
    int empId[5];
    float salary[5] ;
    char emp_name[5][50] ;
    int n;

    std::cout << "Enter number of employees : ";
    std::cin >> n;

    std::cin.ignore();
    for (int i = 0; i < n; i++) {
        std::cout << "\n Enter employee ID: ";
        std::cin >> empId[i];

        std::cin.ignore();

        std::cout << "Enter Employee Name: ";
        std::cin.getline(emp_name[i], 50);

        std::cout<< "Enter Salary: ";
        std::cin>> salary[i];
    }

    std::cout << "\n----- Employee Records -----\n";

    for (int i = 0; i < n; i++) {
        std::cout<< "ID : "<< empId[i]<< "\nName: " << emp_name[i]<< "\n Salary: " << salary[i] << "\n";
    }
    return 0;
}