#include <iostream>
using namespace std;

int countFactors(int n, int originalN)
{
    if (n == 0)
        return 0;

    int digit = n % 10;
    if (digit != 0 && originalN % digit == 0)
        return 1 + countFactors(n / 10, originalN);
    else
        return countFactors(n / 10, originalN);
}

int main()
{
    int numTestCases;
    cin >> numTestCases;

    while (numTestCases > 0)
    {
        int x;
        cin >> x;
        cout << countFactors(x, x) << endl;
        numTestCases--;
    }

    return 0;
}