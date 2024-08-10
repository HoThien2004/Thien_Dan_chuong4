#include <iostream>

using namespace std;

int tinhAn(int n) {
    if (n == 1) {
        return 1;
    }
    else {
        return n * (tinhAn(n - 1) + n - 1);
    }
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    cout << "An = " << tinhAn(n) << endl;

    return 0;
}
