#include <iostream>

using namespace std;

void fibonacci(int n) {
    if (n <= 0) {
        cout << "Nhap n lon hon 0." << endl;
        return;
    }

    if (n == 1) {
        cout << 0 << " ";
        return;
    }

    int t1 = 0, t2 = 1, nextTerm;

    cout << t1 << " " << t2 << " ";

    for (int i = 3; i <= n; ++i) {
        nextTerm = t1 + t2;
        cout << nextTerm << " ";
        t1 = t2;
        t2 = nextTerm;
    }
}

int main() {
    int n;
    cout << "Nhap so luong so Fibonacci: ";
    cin >> n;
    fibonacci(n);
    return 0;
}
