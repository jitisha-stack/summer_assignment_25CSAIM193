#include <iostream>
int main () {
    int roll ;
    float marks;
    char name[50] ;
    std::cout << "Enter Roll number :" ;
    std::cin >> roll;
    std::cin.ignore();

    std::cout<< "Enter student's Name :" ;
    std::cin.getline(name,50);

    std::cout<<"Enter marks :";
    std::cin>> marks;

    std::cout<<"\n    student records      \n";
    std::cout<<"Roll Number : "<<roll<<std::endl;
    std::cout<<"Name : "<<name<<std::endl;
    std::cout<<"Marks : "<<marks<< std::endl;
    return 0;

}