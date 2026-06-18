#include <iostream>
int main() {
    int n ;
    std::cout << "Enter number of elements: ";
    std::cin >> n ;

    int arr[80];

    std::cout << "Enter array elements : " <<std::endl ;
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    //descending order sorting
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {

            if (arr[i] < arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    std::cout << "Array in Descending Order : ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}