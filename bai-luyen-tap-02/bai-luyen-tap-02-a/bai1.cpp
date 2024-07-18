#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; ++i) {
        cin >> A[i];
    }


    sort(A.begin(), A.end());


    int maxCount = 0;
    for (int i = 0; i < n; ++i) {
        int count = 1;
        for (int j = i + 1; j < n; ++j) {
            if (abs(A[j] - A[i]) <= 1) {
                count++;
            }
            else {
                break;
            }
        }
        maxCount = max(maxCount, count);
    }

    cout << maxCount;

    return 0;
}