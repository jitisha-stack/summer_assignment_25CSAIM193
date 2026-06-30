#include <iostream>

int main() {
    int arr[10], n, choice, sum = 0, max ;

    std::cout << "Enter number of elements: ";
    std::cin >> n;

    std::cout << "Enter array elements : \n";
    for (int i = 0; i < n; i++)
        std::cin >> arr[i];

    std::cout <<"\n 1. Display Array \n";
    std::cout <<"2. Find sum \n";
    std::cout <<"3. Find Maximum element \n";

    std::cout<<"Enter choice: ";
    std::cin>> choice;

    switch (choice) {
        case 1:
            std::cout << "Array Elements : " ;
            for (int i = 0; i < n; i++)
                std::cout <<arr[i] << " " ;
            break;

        case 2:
            for (int i = 0; i < n; i++)
                sum += arr[i];

            std::cout << "Sum = "<< sum;
            break;

        case 3:
            max = arr[0];

            for (int i = 1; i < n; i++) {
                if (arr[i] > max)
                    max = arr[i];
            }

            std::cout << "Maximum element  = " << max;
            break;

        default:
            std::cout << "Invalid Choice" ;
    }
    return 0;
}