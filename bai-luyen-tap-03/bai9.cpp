#include<iostream>

using namespace std;

int* getPointerToArray(int n)
{
	int* arr = new int[n]; // Cấp phát bộ nhớ động cho mảng
	for (int i = 0; i < n; ++i)
	{
		cin >> arr[i]; // Nhập giá trị cho từng phần tử của mảng
	}
	return arr; // Trả về con trỏ tới mảng
}

int main()
{
	int n;
	cin >> n;
	int* arr = getPointerToArray(n);
	for (int i = 0; i < n; ++i)
	{
		cout << arr[i] << " ";
	}
	delete[] arr;
	return 0;
}