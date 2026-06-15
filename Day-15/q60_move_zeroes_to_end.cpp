#include <iostream>

// Function to move zeroes to end
void movezeroes(int arr[], int size) {
    int index = 0;

    // place non-zero elements first
    for (int i = 0; i < size; i++) {
        if (arr[i] != 0) {
            arr[index] = arr[i];
            index++;
        }
    }

    while (index < size) {
        arr[index] = 0;
        index++;
    }
}

//display array
void display(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
}

int main() {
    int n ;
    std::cout << "Enter array size: ";
    std::cin >> n;

    int arr[n];

    std::cout << "Enter elements: "<<std::endl;

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

movezeroes(arr, n);

    std::cout << "Array after moving zeroes: ";
    display(arr, n) ;

    return 0;
}