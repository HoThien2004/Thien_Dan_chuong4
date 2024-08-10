#include <iostream>

using namespace std;

int tinhYn_dequy(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (n == 3) return 3;
    return tinhYn_dequy(n - 1) + 2 * tinhYn_dequy(n - 2) + 3 * tinhYn_dequy(n - 3);
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    cout << "Yn = " << tinhYn_dequy(n) << endl;

    return 0;
}
