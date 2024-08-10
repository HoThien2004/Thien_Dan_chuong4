#include <iostream>

using namespace std;

int tinhXn_dequy(int n) {
    if (n == 1 || n == 2) return 1;
    return tinhXn_dequy(n - 1) + (n - 1) * tinhXn_dequy(n - 2);
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    cout << "Xn = " << tinhXn_dequy(n) << endl;

    return 0;
}
