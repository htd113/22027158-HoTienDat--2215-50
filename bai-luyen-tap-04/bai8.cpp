#include<iostream>
using namespace std;
int is_surray (int* A, int n, int* B, int m)
{
	if (n > m) return -1;
	else if (n == m)
	{
		int count = 0;
		for (int i = 0; i < n; ++i)
		{
			if (A[i] == B[i]) count++;
		}
		if (count == n) return 1;
		else return -1;
	}
	else if (n < m)
	{
		for (int i = 0; i < m - n + 1; ++i)
		{
			bool check = true;
			for (int j = 0; j < n; ++j)
			{
				if (A[j] != B[i + j])
				{
					check = false;
					break;
				}
			}
			if (check) return 1;
		}
		return -1;
	}
	return -1;
}
int main()
{
	int n, m;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	cin >> m;
	int* b = new int[m];
	for (int i = 0; i < m; ++i)
	{
		cin >> b[i];
	}

	if (is_surray(a, n, b, m)==1) cout << "YES";
	else cout << "NO";
	delete[] a;
	delete[] b;
	return 0;
}