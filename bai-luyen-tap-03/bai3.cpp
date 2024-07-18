#include <iostream>
using namespace std;
int a[100];
void print(int n) {
	for (int i = 0; i < n; ++i) {
		cout << a[i];
	}
	cout << endl;
}
void generate(int n, int k) {
	for (int i = 0; i < 2; ++i) {
		a[k] = i;
		if (k == n - 1) {
			if (a[k + 1] != 1 || a[k] != 1) print(n);
		}
		else {
			generate(n, k + 1);
		}
	}
}
int main()
{
	int n;
	cin >> n;
	generate(n, 0);
}
