﻿#include <iostream>

using namespace std;

int binarySearch(int arr[], int l, int r, int x) {
    if (r >= l) {
        int mid = l + (r - l) / 2;

        // Nếu x nằm ở giữa
        if (arr[mid] == x)
            return mid;

        // Nếu x nhỏ hơn phần tử giữa, tìm kiếm trong nửa trái
        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        // Ngược lại, tìm kiếm trong nửa phải
        return binarySearch(arr, mid + 1, r, x);
    }

    // Nếu không tìm thấy
    return -1;
}

int main() {
    int arr[] = { 2, 3, 4, 10, 40 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 10;
    int result = binarySearch(arr, 0, n - 1, x);
    (result == -1) ? cout << "Element is not present in array"
        : cout << "Element is present at index " << result;
    return 0;
}
