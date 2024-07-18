#include <iostream>
using namespace std;

void printPattern(int n, int i = 1) {
    if (i > n)
        return; // Base case: stop when i exceeds n

    // In ra hàng thứ i
    for (int j = i; j <= n; j++) {
        cout << j << " ";
    }
    for (int j = 1; j < i; j++) {
        cout << j << " ";
    }
    cout << endl;

    // Đệ quy cho hàng tiếp theo
    printPattern(n, i + 1);
}

int main() {
    int n;
    cin >> n;

    printPattern(n);

    return 0;
}