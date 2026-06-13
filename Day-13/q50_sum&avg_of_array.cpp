#include <iostream>

// function to find sum
int Sum(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++) {
        sum += arr[i];
    }
    return sum;
}

// function to find average
float Avg(int arr[], int size){
    int sum = Sum(arr, size);
    return (float)sum / size;
}

int main() {
    int n;

    std::cout << "Enter array size : ";
    std::cin >>n;

    int arr[n];

    for (int i = 0; i < n; i++)
    {
        std::cin >> arr[i];
    }

    std::cout << "Sum = " << Sum(arr, n) << std::endl;
    std::cout << "Average = " << Avg(arr, n);
    return 0;
}