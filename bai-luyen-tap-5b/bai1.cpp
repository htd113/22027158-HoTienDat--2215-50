#include<iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    char mine[100][100];
    int sum[100][100] = { 0 };

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            cin >> mine[i][j];
        }
    }

    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (mine[i][j] == '.')
            {
                for (int k = -1; k <= 1; ++k)
                {
                    for (int h = -1; h <= 1; ++h)
                    {
                        int nx = i + k;
                        int ny = j + h;
                        if (nx >= 0 && nx < m && ny >= 0 && ny < n)
                        {
                            if (mine[nx][ny] == '*')
                            {
                                sum[i][j]++;
                            }
                        }
                    }
                }
            }
        }
    }

    // Output the result
    for (int i = 0; i < m; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (mine[i][j] == '*')
            {
                cout << '*';
            }
            else
            {
                cout << sum[i][j];
            }
            cout << " ";
        }
        cout << endl;
    }

    return 0;
}
