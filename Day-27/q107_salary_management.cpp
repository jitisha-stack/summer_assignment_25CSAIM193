#include <iostream>

struct Salary {
    int id;
    char name[30];
    float basic , hra , da , net;
};

int main() {
    Salary s[100];
    int n, i;
    //number of employees
    std::cout << "Enter number of records: ";
    std::cin >> n;

    for (i = 0; i < n; i++) {
        std::cout << "\n Enter employee "<< i + 1<< " detail \n";
        std::cout << "ID: ";
        std::cin >> s[i].id;

        std::cout<< "Name : ";
        std::cin >>s[i].name;

        std::cout<< "Basic salary : ";
        std::cin>> s[i].basic;

        std::cout<< "HRA : ";
        std::cin>> s[i].hra; //house rent allowance

        std::cout <<"DA : ";
        std::cin >> s[i].da; //dearness allowance

        s[i].net = s[i].basic + s[i].hra + s[i].da; //total or net salary
    }

    std::cout << "\n--- Salary Records ---\n";
    for (i = 0; i<n; i++) {
        std::cout <<s[i].id << " " << s[i].name << " " << s[i].net << std::endl;
    }
    return 0;
}