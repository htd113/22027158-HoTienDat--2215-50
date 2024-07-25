#include <iostream>
#include <math.h>
using namespace std;
void primeFactors(int n) {
    int count = 0;
    while (n % 2 == 0) {
        count++;
        n = n / 2;
    }
    if (count != 0) cout << 2 << " " << count << endl;

    for (int i = 3; i <= sqrt(n); i = i + 2) {
        int count = 0;
        while (n % i == 0) {
            count++;
            n = n / i;
        }
        if (count != 0) cout << i << " " << count << endl;
    }

    if (n > 2) cout << n << " " << 1;
}

int main() {
    int n;
    cin >> n;
    primeFactors(n);
    return 0;
}
