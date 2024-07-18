
#include <iostream>
using namespace std;
int a[100];
void print(int n, int m) {
    for (int i = 0; i < n + m; ++i) {
        cout << a[i];
    }
    cout << endl;
}
void generate(int n, int m, int k, int zeros, int ones) {
    if (zeros == n && ones == m) {
        print(n, m);
        return;
    }

    if (zeros < n) {
        a[k] = 0;
        generate(n, m, k + 1, zeros + 1, ones);
    }

    if (ones < m) {
        a[k] = 1;
        generate(n, m, k + 1, zeros, ones + 1);
    }
}

int main()
{
    int n, m;
    cin >> n >> m;
    generate(n, m, 0, 0, 0);
}

