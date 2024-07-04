#include<iostream>
using namespace std;
double getmax(double arr[], int n) {
    double max = arr[0];
    for (int i = 0;i < n;++i) {
        if (arr[i] > max) max = arr[i];
    }
    return max;
}
double getmin(double arr[], int n) {
    double min = arr[0];
    for (int i = 0;i < n;++i) {
        if (arr[i] < min) min = arr[i];
    }
    return min;
}
int main() {
    int n;
    cin >> n;
    double arr[100];
    for (int i = 0;i < n;++i) {
        cin >> arr[i];
    }
    cout << getmax(arr, n) << endl;
    cout << getmin(arr, n);

    return 0;
}