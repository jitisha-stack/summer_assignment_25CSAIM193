#include <iostream>

int main() {
    float balance = 10000, amount;
    int choice = 0;

    while (choice != 4) {
        std::cout<< "\n---  Banking Menu   ---\n";
        std::cout<< "1. Check Balance \n" ;
        std::cout<< "2. Deposit Money \n" ;
        std::cout<< "3. Withdraw Money \n" ;
        std::cout<< "4. Exit \n";

        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Current Balance = " << balance ;
                break;

            case 2:
                std::cout << "Enter amount to deposit : " ;
                std::cin >> amount;
                balance += amount;
                std::cout<< "Amount Deposited Successfully " ;
                break;

            case 3:
                std::cout << "Enter amount to withdraw : ";
                std::cin >> amount;

                if (amount <= balance) {
                    balance -= amount;
                    std::cout<< "Withdrawal Successful ";
                } else {
                    std::cout<< "Insufficient Balance " ;
                }
                break;

            case 4:
                std::cout << "Thank You.";
                break;

            default:
                std::cout << "Invalid Choice.";
        }
    }

    return 0;
}