#include<math.h>
#include<iostream>
bool is_prime(int n)
{
    int k = sqrt(n);
    int count = 0;
    for (int i = 1; i <= k; ++i)
    {
        if (n % i == 0) count++;
    }
    if (count != 1) return 0;
    return 1;
}

void print_prime(int n)
{
    for (int i = 2; i < n; ++i) {
        if (is_prime(i)) cout << i << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    print_prime(n);
    return 0;
}