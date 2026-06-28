#include <iostream>

int main() {
    int seats = 50;
    int choice = 0;

    while (choice != 4) {
        std::cout << "\n---   Railway Reservation Menu  --- \n";
        std::cout << "1. Check Available Seats\n";
        std::cout << "2. Book Seat\n";
        std::cout << "3. Cancel Reservation\n";
        std::cout << "4. Exit \n";

        std::cout << "Enter your choice : ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Available Seats: " << seats ;
                break;

            case 2:
                if (seats > 0) {
                    seats--;
                    std::cout << "Seat Booked Successfully ";
                } else {
                    std::cout << "No Seats Available ";
                }
                break;

            case 3:
                seats++;
                std::cout << "Reservation Cancelled " ;
                break;

            case 4:
                std::cout << "Exiting " ;
                break;

            default:
                std::cout << "Invalid Choice" ;
        }
    }

    return 0;
}