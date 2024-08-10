#include <iostream>

using namespace std;

int findLargestFibonacciLessThanN(int n) {
    int t1 = 0, t2 = 1, nextTerm;
    while (t2 <= n) {
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return t1;
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;
    cout << "So Fibonacci lon nhat nho hon n la: " << findLargestFibonacciLessThanN(n) << endl;
    return 0;
}
