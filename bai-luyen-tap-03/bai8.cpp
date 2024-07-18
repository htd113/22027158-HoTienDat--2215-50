#include <iostream>
using namespace std;

void multiply(int* n, int k)
{
    *n = (*n) * k;
}

int main()
{
    int num;
    int k;
    cin >> num >> k;
    multiply(&num, k);
    cout << num << endl;
    return 0;
}
