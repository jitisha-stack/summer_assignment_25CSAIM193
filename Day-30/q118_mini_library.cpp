#include <iostream>

int main() {
    char books[5][50];
    int n ;

    std::cout<< "Enter number of books: ";
    std::cin>> n;

    std::cin.ignore();

    for (int i = 0; i < n; i++) {
        std::cout << "Enter Book Name : ";
        std::cin.getline(books[i], 50);
    }

    std::cout << "\n----- Library Books -----\n";

    for (int i = 0; i < n; i++)
        std::cout << books[i]<< std::endl ;
    return 0;
}