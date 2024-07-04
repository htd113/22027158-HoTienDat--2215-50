#include<iostream>
#include<iomanip>
using namespace std;
int main() {
    double a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;
    double ans = (a + b + c + d + e) / 5.0;
    cout << fixed << setprecision(2);
    cout << ans;
    return 0;
}