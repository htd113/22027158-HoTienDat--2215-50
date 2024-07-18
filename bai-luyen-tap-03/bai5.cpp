#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int* a = new int[n];
    for (int i = 0; i < n; ++i)
    {
        cin >> a[i];
    }
    sort(a, a + n);

    for (int i = 0; i < n - 2; ++i)
    {
        if (i > 0 && a[i] == a[i - 1])
        {
            continue; // Skip duplicate elements
        }

        int left = i + 1;
        int right = n - 1;

        while (left < right)
        {
            int sum = a[i] + a[left] + a[right];
            if (sum == 0)
            {
                cout << a[i] << " " << a[left] << " " << a[right] << endl;
                ++left;
                --right;

                // Skip duplicate elements
                while (left < right && a[left] == a[left - 1])
                {
                    ++left;
                }
                while (left < right && a[right] == a[right + 1])
                {
                    --right;
                }
            }
            else if (sum < 0)
            {
                ++left;
            }
            else
            {
                --right;
            }
        }
    }

    delete[] a;
    return 0;
}
