#include <iostream>

using namespace std;

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    else {
        return gcd(b, a % b);
    }
}

int main() {
    int a, b;
    cout << "Nhap so nguyen duong a: ";
    cin >> a;
    cout << "Nhap so nguyen duong b: ";
    cin >> b;

    cout << "Uoc chung lon nhat cua " << a << " va " << b << " la: " << gcd(a, b) << endl;

    return 0;
}
