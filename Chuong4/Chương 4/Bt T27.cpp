#include <iostream>
#include <cmath>

using namespace std;

// Hàm tính giai thừa
int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

// Các hàm tính S(n)
// S1(n) = 1 + 2 + 3 + ... + n
int S1(int n) {
    if (n == 1)
        return 1;
    else
        return n + S1(n - 1);
}

// S2(n) = √(2 + √(2 + ... + √2))
double S2(int n) {
    if (n == 1)
        return sqrt(2);
    else
        return sqrt(2 + S2(n - 1));
}

//S3(n) = 1/2 + 2/3 + ... + n/(n+1)
double S3(int n) {
    if (n == 1) {
        return 0.5; 
    }
    else {
        return S3(n - 1) + (double)n / (n + 1);
    }
}

//S4(n) = 1 + 1 / 3 + 1 / 5 + ... + 1 / (2n + 1)
double S4(int n) {
    if (n == 0) {
        return 1;
    }
    else {
        return S4(n - 1) + 1.0 / (2 * n + 1);
    }
}

//S5(n) = 1.2 + 2.3 + 3.4 + ... + n.(n+1)
int S5(int n) {
    if (n == 1) {
        return 2;
    }
    else {
        return S5(n - 1) + n * (n + 1);
    }
}

//S6(n) = 1/(1*2*3) + 1/(2*3*4) + ... + 1/(n*(n+1)*(n+2))
double S6(int n) {
    if (n == 1) {
        return 1.0 / 6; 
    }
    else {
        return S6(n - 1) + 1.0 / (n * (n + 1) * (n + 2)); 
    }
}

//S7(n) = 1^2 + 2^2 + ... + n^2
int S7(int n) {
    if (n == 1) {
        return 1;
    }
    else {
        return S7(n - 1) + n * n; 
    }
}

//S8(n) = 1 + (1+2) + (1+2+3) + ... + (1+2+3+...+n)
int S8(int n) {
    if (n == 1) {
        return 1;
    }
    else {
        return S8(n - 1) + n * (n + 1) / 2;
    }
}

//S9
double S9(int n) {
    if (n == 1) {
        return -(1 + 2) / factorial(2);
    }
    else {
        return S9(n - 1) + pow(-1, n) * (2 * n - 1 + 2 * n) / factorial(2 * n);
    }
}

//S10
double S10(int n) {
    if (n == 1) {
        return (1 * factorial(2)) / (2 + sqrt(3));
    }
    else {
        return S10(n - 1) + (n * factorial(n + 1)) / (n + 1 + sqrt(n + 2));
    }
}


int main() {
    int n;
    cout << "Nhap n: ";
    cin >> n;

    // Gọi các hàm tính S(n) tương ứng
    cout << "S1(n) = " << S1(n) << endl;
    cout << "S2(n) = " << S2(n) << endl;
    cout << "S2(n) = " << S3(n) << endl;
    cout << "S2(n) = " << S4(n) << endl;
    cout << "S2(n) = " << S5(n) << endl;
    cout << "S2(n) = " << S6(n) << endl;
    cout << "S2(n) = " << S7(n) << endl;
    cout << "S2(n) = " << S8(n) << endl;
    cout << "S2(n) = " << S9(n) << endl;
    cout << "S2(n) = " << S10(n) << endl;

    return 0;
}
