#include <iostream>

//function to copy array
void copy(int source[], int destination[], int n) {
    for (int i = 0; i < n; i++)  {
        destination[i] = source[i];
    }
}

// function to display array
void display(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
}

int main() {
    int size;

    std::cout << "Enter size: ";
    std::cin >> size;

    int source[size];
    int destination[size];

    std::cout << "Enter elements:\n";

    for (int i = 0; i < size; i++) {
        std::cin >> source[i];
    }

    copy(source, destination, size);

    std::cout << "Copied Array: ";
    display(destination, size);

    return 0;
}