#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
    {
        return a;
    }
    else
    {
        return gcd(b, a % b);
    }
}

int main()
{
    int a, b;

    cin >> a >> b;

    int c = gcd(a, b);
    if (c == 0) cout << 0;

    else cout << abs((a * b) / c) << endl;

    return 0;
}
