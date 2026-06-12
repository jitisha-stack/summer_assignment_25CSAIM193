#include <iostream>

// function to print Fibonacci series
void fibo(int n){
     int t1 = 0, t2 = 1, next;

    for (int i = 1; i <= n; i++) {
        std::cout << t1 << " ";

        next = t1 +t2;
        t1 = t2;
        t2 = next;
    }
}

int main() {
    int n;

    std::cout << "Enter number of terms: ";
    std::cin >> n;

    std::cout << "Fibonacci Series: ";
    fibo(n);

    return 0;
}