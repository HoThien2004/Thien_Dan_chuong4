#include <iostream>

using namespace std;

// Công thức quy nạp 1
int tinhAn1(int n) {
    if (n == 0) return 1;
    if (n == 1) return 0;
    if (n == 2) return -1;
    return 2 * tinhAn1(n - 1) - 3 * tinhAn1(n - 2) - tinhAn1(n - 3);
}

// Công thức quy nạp 2
int tinhAn2(int n) {
    if (n == 1) return 1;
    if (n == 2) return 2;
    if (n == 3) return 3;
    return 2 * tinhAn2(n - 2) + tinhAn2(n - 1) - 3 * tinhAn2(n - 3);
}

int main() {
    int n, choice;
    cout << "Nhap n: ";
    cin >> n;
    cout << "Chon cong thuc quy nap (1 hoac 2): ";
    cin >> choice;

    if (choice == 1) {
        cout << "An = " << tinhAn1(n) << endl;
    }
    else if (choice == 2) {
        cout << "An = " << tinhAn2(n) << endl;
    }
    else {
        cout << "Lua chon khong hop le." << endl;
    }

    return 0;
}
