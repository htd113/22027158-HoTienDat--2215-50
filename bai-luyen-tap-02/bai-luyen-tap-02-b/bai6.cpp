#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	string s;
	cin >> s;
	int count = 0;
	int size = s.length();
	for (int i = 0; i < size / 2; ++i)
	{
		if (s[i] != s[size - 1 - i])
		{
			cout << "No";
			break;
		}
		count++;
	}
	if (count == size / 2) cout << "Yes";
	return 0;
}