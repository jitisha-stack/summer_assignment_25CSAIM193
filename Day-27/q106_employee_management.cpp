#include <iostream>

struct employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    employee e[100];
    int n, i;

    std::cout << "Enter number of employees: ";
    std::cin >> n;

    for (i = 0; i < n; i++) {
        std::cout << "\n Enter employee " << i + 1 << " details\n";
        std::cout << "ID : ";
        std::cin >> e[i].id;

        std::cout << "Name: ";
        std::cin >> e[i].name;

        std::cout << "Salary: ";
        std::cin >> e[i].salary;
    }

    std::cout << "\n---  Employee Records  ---\n";
    for (i = 0; i < n; i++) {
        std::cout << e[i].id << " " << e[i].name << " " << e[i].salary << std::endl;
    }
    return 0;
}