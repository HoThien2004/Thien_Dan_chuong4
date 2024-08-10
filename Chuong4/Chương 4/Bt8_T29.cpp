#include <iostream>

using namespace std;

int f(int n) {
    if (n == 1) {
        return 1;
    }
    else if (n % 2 == 0) {
        return 2 * f(n / 2);
    }
    else {
        return 2 * f(n / 2) + 3 * f((n + 1) / 2);
    }
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    cout << "f(" << n << ") = " << f(n) << endl;

    return 0;
}
