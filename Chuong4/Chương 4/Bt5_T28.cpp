#include <iostream>

using namespace std;

double capSoNhan(double a, double q, int n) {
    if (n == 1) {
        return a; // Trường hợp cơ sở: phần tử đầu tiên
    }
    else {
        return q * capSoNhan(a, q, n - 1); // Gọi đệ quy để tính phần tử trước đó và nhân với công bội
    }
}

int main() {
    double a, q;
    int n;
    cout << "Nhap so hang dau a: ";
    cin >> a;
    cout << "Nhap cong boi q: ";
    cin >> q;
    cout << "Nhap vi tri phan tu can tim n: ";
    cin >> n;

    cout << "Phan tu thu " << n << " cua cap so nhan la: " << capSoNhan(a, q, n) << endl;

    return 0;
}
