#include <iostream>

int main() {
    int totalbooks = 100 ;
    int choice = 0 ;
    while (choice != 4) {
        std::cout << "\n---  Library Menu  ---\n" ;
        std::cout << "1. View Available Books \n"  ;
        std::cout << "2. Issue Book \n";
        std::cout << "3. Return Book \n" ;
        std::cout << "4. Exit \n ";

        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Available Books: " << totalbooks ;
                break;

            case 2:
                if (totalbooks > 0) {
                    totalbooks--;
                    std::cout << "Book Issued Successfully!" ;
                } else {
                    std::cout << "No Books Available.";
                }
                break ;

            case 3:
                totalbooks++ ;
                std::cout << "Book Returned Successfully ";
                break;

            case 4:
                std::cout << "Exiting";
                break;

            default:
                std::cout << "Invalid Choice.";
        }
    }
    return 0;
}