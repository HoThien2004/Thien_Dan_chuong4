#include <iostream>

using namespace std;

int power(int m, int n) {
    if (n == 0) {
        return 1; // Mọi số mũ 0 đều bằng 1
    }
    else if (n % 2 == 0) {
        int temp = power(m, n / 2);
        return temp * temp; // Tính hiệu quả khi số mũ chẵn
    }
    else {
        return m * power(m, n - 1); // Trường hợp tổng quát
    }
}

int main() {
    int m, n;
    cout << "Nhap so nguyen m: ";
    cin >> m;
    cout << "Nhap so nguyen duong n: ";
    cin >> n;

    cout << m << "^" << n << " = " << power(m, n) << endl;

    return 0;
}
