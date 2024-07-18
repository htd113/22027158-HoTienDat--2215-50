#include<iostream>
using namespace std;

void swap(int& a, int& b)
{
    int temp = a;
    a = b;
    b = temp;
}

void Bubble_Sort(int* a, int n)
{
    for (int i = 0; i < n - 1; ++i)
    {
        for (int j = i + 1; j < n; ++j)
        {
            if (a[i] > a[j]) swap(a[i], a[j]);
        }
    }
}

void print_ans(int* a, int n)
{
    int cur_time = 0;
    int ans = 0;
    for (int i = 0; i < n; ++i)
    {
        ans += cur_time;
        cur_time += a[i];
    }
    cout << ans;
}
int main()
{
    int n;
    cin >> n;
    int* ar = new int[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> ar[i];
    }
    Bubble_Sort(ar, n);
    print_ans(ar, n);

    return 0;
}