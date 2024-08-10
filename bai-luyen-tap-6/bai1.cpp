#include <iostream>
using namespace std;

bool isSubset(int* a1, int m, int* a2, int n) {
    for (int i = 0; i < n; i++) {
        bool found = false;
        for (int j = 0; j < m; j++) {
            if (a2[i] == a1[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            return false;
        }
    }
    return true;
}

int main() {
    int m, n;
    cin >> m >> n;
    int* a1 = new int[m];
    int* a2 = new int[n];
    for (int i = 0; i < m; ++i)
    {
        cin >> a1[i];
    }

    for (int i = 0; i < n; ++i)
    {
        cin >> a2[i];
    }

    if (isSubset(a1, m, a2, n)) {
        cout << "Yes" << endl;
    }
    else {
        cout << "No" << endl;
    }

    delete[] a1;
    delete[] a2;
    return 0;
}
