#include<iostream>
#include <algorithm>
using namespace std;
int main()
{
    int N;
    cin >> N;
    int* A = new int[N], * B = new int[N];
    for (int i = 0; i < N; ++i)
    {
        cin >> A[i];
    }
    sort(A, A + N);
    for (int i = 0; i < N; ++i)
    {
        cin >> B[i];
    }
    sort(B, B + N);
    int sum = 0;
    for (int i = 0; i < N; ++i)
    {
        if (A[i] != B[i]) sum += A[i] + B[i];
    }
    cout << sum;
    delete[] A;
    delete[] B;
    return 0;

}