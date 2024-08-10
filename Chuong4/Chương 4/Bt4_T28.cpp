#include <iostream>

using namespace std;

int capSoCong(int a, int r, int n) {
    if (n == 1) {
        return a; // Trường hợp cơ sở: phần tử đầu tiên
    }
    else {
        return capSoCong(a, r, n - 1) + r; // Gọi đệ quy để tính phần tử trước đó và cộng thêm công sai
    }
}

int main() {
    int a, r, n;
    cout << "Nhap so hang dau a: ";
    cin >> a;
    cout << "Nhap cong sai r: ";
    cin >> r;
    cout << "Nhap vi tri phan tu can tim n: ";
    cin >> n;

    cout << "Phan tu thu " << n << " cua cap so cong la: " << capSoCong(a, r, n) << endl;

    return 0;
}
