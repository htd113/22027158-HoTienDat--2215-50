#include <iostream>
#include <cmath>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    long n;
    cin >> n;
    long* arr = new long[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    // Sắp xếp mảng
    sort(arr, arr + n);

    long min_diff = INT_MAX;
    for (int i = 1; i < n; ++i) {
        long diff = arr[i] - arr[i - 1];
        if (diff < min_diff) {
            min_diff = diff;
        }
    }

    cout << min_diff;

    delete[] arr;
    return 0;
}
