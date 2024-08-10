#include <iostream>

using namespace std;

int tinhU(int n) {
    if (n < 6) {
        return n; // Trường hợp cơ sở
    }
    else {
        return tinhU(n - 5) + tinhU(n - 4) + tinhU(n - 3) + tinhU(n - 2) + tinhU(n - 1); // Gọi đệ quy
    }
}

int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    cout << "U(" << n << ") = " << tinhU(n) << endl;

    return 0;
}
