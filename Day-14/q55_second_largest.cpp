#include <iostream>

//function to find second largest element
int secondlargest(int arr[], int size){
    int largest = arr[0];
    int second = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > largest) {
            second = largest;
            largest = arr[i];
        }
        else if (arr[i] > second && arr[i] != largest) {
            second = arr[i];
        }
    }

    return second;
}

int main() {
    int size;

    std::cout << "Enter array size: ";
    std::cin >> size;

    int arr[size];

    for (int i = 0; i < size; i++) {
        std::cin >> arr[i];
    }

    std::cout << "Second Largest Element = "
              << secondlargest(arr, size);

    return 0;
}