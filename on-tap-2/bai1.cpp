#include <iostream>
#include <vector>
using namespace std;

int main() {
    int x;
    vector<int> v;

    // Nhập n số nguyên
    do {
        cin >> x;
        v.push_back(x);
    } while (x >= 0);

    // Loại bỏ các phần tử liền kề giống nhau
    for (size_t i = 0; i < v.size(); ++i) {
        if (i == 0 || v[i] != v[i - 1]) cout << v[i] << " ";
    }
    return 0;
}
