#include<iostream>
using namespace std;
/*dùng công th?c truy h?i
 * C(n,k) : s? h?ng c?a h? s? nh? phân
 * C(n,0) = C(n,n) = 1
 * C(n,k) = C(n-1,k) + C(n-1,k-1) */

int pascal(int n, int k)
{
	if (k == 0 || k == n) return 1;

	else return pascal(n - 1, k) + pascal(n - 1, k - 1);
}

void print_pascal(int n)
{
	for (int i = 0; i <= n; ++i)
	{
		for (int j = 0; j <= i; ++j)
		{
			cout << pascal(i, j) << " ";
		}
		cout << endl;
	}
}
int main()
{
	int n;
	cin >> n;
	print_pascal(n);
	return 0;
}