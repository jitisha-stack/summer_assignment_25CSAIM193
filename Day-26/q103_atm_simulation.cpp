#include <iostream>

int main() {
    int choice;
    float bal = 10000, amount;

    do {
        // display menu
        std::cout << "\n    ATM MENU     \n";
        std::cout << "1. Check Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit \n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;

        switch (choice) {
            case 1:
                std::cout << "Current Balance : " << bal << std::endl;
                break;

            case 2 :
                std::cout << "Enter amount to deposit : ";
                std::cin >> amount;

                bal = bal + amount;
                std::cout << "Amount Deposited Successfully.\n";
                break;

            case 3:
                std::cout << "Enter amount to withdraw : ";
                std::cin >> amount;

                if (amount <= bal) {
                    bal = bal - amount ;
                    std::cout << "Please collect your cash \n";
                } else {
                    std::cout << "Balance Insufficient \n";
                }
                break;

            case 4:
                std::cout << "Thank You \n";
                break;

            default:
                std::cout << "Invalid Choice \n";
        }

    } while (choice != 4);
    return 0;
}