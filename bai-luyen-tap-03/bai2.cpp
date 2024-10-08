﻿#include <iostream>
using namespace std;

bool binary_search(int* a, int n, int l, int h)
{
    if (l > h) return false;
    int mid = (l + h) / 2;
    if (a[mid] == n) return true;
    else if (n > a[mid]) return binary_search(a, n, mid + 1, h);
    else return binary_search(a, n, l, mid - 1);
}

int main()
{
    int m, n;
    cin >> m >> n;
    int* array = new int[m];
    for (int i = 0; i < m; ++i)
    {
        cin >> array[i];
    }

    int* ans = new int[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> ans[i];
    }
    for (int i = 0; i < n; ++i)
    {
        if (binary_search(array, ans[i], 0, m - 1)) cout << "YES" << " ";
        else cout << "NO" << " ";
    }

    delete[] array;
    delete[] ans;
    return 0;
}
