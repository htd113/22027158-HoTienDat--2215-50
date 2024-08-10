#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int a[1000];
    for (int i = 0; i < N; ++i)
    {
        cin >> a[i];
    }

    sort(a, a + N);
    int count, max = 0;
    int index = 0;
    for (int i = 0; i < N; ++i)
    {
        count = 1;
        while (i + 1 < N && a[i] == a[i + 1])
        {
            count++;
            i++;
        }
        if (max < count)
        {
            max = count;
            index = i;
        }
    }

    cout << a[index];
    return 0;
}
