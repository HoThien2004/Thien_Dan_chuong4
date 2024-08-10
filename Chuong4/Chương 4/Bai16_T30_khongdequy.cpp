#include <iostream>

using namespace std;

int tinhXn_khong_dequy(int n) {
    if (n <= 0) return -1; // Trường hợp lỗi
    if (n == 1 || n == 2) return 1;

    int x1 = 1, x2 = 1, x;
    for (int i = 3; i <= n; ++i) {
        x = x2 + (i - 1) * x1;
        x1 = x2;
        x2 = x;
    }
    return x;
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    cout << "Xn = " << tinhXn_khong_dequy(n) << endl;

    return 0;
}
