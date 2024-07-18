#include<iostream>
#include<math.h>
using namespace std;
bool check(int n)
{
	if (n < 2) return 0;
	if (n == 2) return 1;
	int c = sqrt(n);
	int count = 0;
	for (int i = 2; i <= c; ++i)
	{
		if (n % i == 0) count++;
	}
	if (count == 0) return 1;
	else return 0;
}
int main()
{
	int n;
	cin >> n;
	int* a = new int[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
	}

	for (int i = 0; i < n; ++i)
	{
		if (check(a[i])) cout << a[i] << " ";
	}

	delete[] a;
	return 0;
}