#include <iostream>

using namespace std;

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int findLargestFibonacciLessThanN(int n) {
    int fib = 0;
    int i = 0;
    while (fib <= n) {
        fib = fibonacci(i);
        i++;
    }
    return fib - fibonacci(i - 1);
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "So Fibonacci lon nhat nho hon n la: " << findLargestFibonacciLessThanN(n) << endl;
    return 0;
}
