#include <iostream>

int main() {
    int product_Id[6], quantity[6];
    int n;

    std::cout << "Enter number of products : ";
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cout << "\n Enter Product ID: ";
        std::cin >> product_Id[i];

        std::cout << "Enter Quantity : ";
        std::cin >> quantity[i];
    }

    std::cout << "\n----- Inventory Details -----\n";

    for (int i = 0; i < n; i++) {
        std::cout << "Product ID : " << product_Id[i]
                  << " Quantity : " << quantity[i] << std::endl;
    }

    return 0;
}