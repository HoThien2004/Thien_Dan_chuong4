#include <iostream>

using namespace std;

// Bài 1: Tính S(n)
int S1(int n) {
    if (n == 1) {
        return 1;
    }
    else {
        return n + S1(n - 1);
    }
}

double S2(int n) {
    if (n == 1) {
        return 1;
    }
    else {
        return 1.0 / n + S2(n - 1);
    }
}

int S3(int n) {
    if (n == 1) {
        return 2;
    }
    else {
        return n * (n + 1) + S3(n - 1);
    }
}

// Bài 2: Tìm giá trị phần tử thứ n của cấp số cộng
int capSoCong(int a, int r, int n) {
    if (n == 1) {
        return a;
    }
    else {
        return capSoCong(a, r, n - 1) + r;
    }
}

// Bài 3: Tìm giá trị phần tử thứ n của cấp số nhân
double capSoNhan(double a, double q, int n) {
    if (n == 1) {
        return a;
    }
    else {
        return q * capSoNhan(a, q, n - 1);
    }
}

int main() {
    int n, a, r;
    double q;

    // Ví dụ: Tính S1(5), phần tử thứ 4 của cấp số cộng với a = 2, r = 3, và phần tử thứ 3 của cấp số nhân với a = 1, q = 2
    cout << "S1(5) = " << S1(5) << endl;
    cout << "Phần tử thứ 4 của cấp số cộng: " << capSoCong(2, 3, 4) << endl;
    cout << "Phần tử thứ 3 của cấp số nhân: " << capSoNhan(1, 2, 3) << endl;

    return 0;
}
