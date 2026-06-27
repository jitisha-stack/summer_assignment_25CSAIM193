#include <iostream>
struct marksheet {
    int roll;
    char name[30];
    int sub1, sub2, sub3;
    int total;
    float percent;
};

int main() {
    marksheet m[100];
    int n, i;

    std::cout << "Enter number of students: ";
    std::cin >> n;

    for (i = 0; i < n; i++) {
        std::cout << "\nEnter student " << i + 1 << " details\n";
        std::cout << "Roll: ";
        std::cin >> m[i].roll;

        std::cout << "Name: ";
        std::cin >> m[i].name;

        std::cout << "Marks in 3 subjects: ";
        std::cin >> m[i].sub1 >> m[i].sub2 >> m[i].sub3;

        m[i].total = m[i].sub1 + m[i].sub2 + m[i].sub3;
        m[i].percent = m[i].total / 3.0f;
    }

    std::cout << "\n---  Marksheet Records  ---\n";
    for (i = 0; i < n; i++) {
        std::cout <<  " Roll : " << m[i].roll << "\n Name : " << m[i].name << "\n Marks : "
                  << m[i].total << "\n Percentage : " << m[i].percent << " % "<<std::endl;
    }
    return 0;
}