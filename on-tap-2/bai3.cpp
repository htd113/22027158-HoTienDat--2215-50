#include<iostream>
#include<math.h>
using namespace std;
int  check(int num) {
    if (num < 2) return 0;
    else {
        int a = sqrt(num);

        for (int i = 2;i <= a;++i) {
            if (num % i == 0)  return 0;
        }
    }
    return 1;
}
int main() {
    int n;
    cin >> n;
    if (check(n)) cout << "yes";
    else cout << "no";
    return 0;
}