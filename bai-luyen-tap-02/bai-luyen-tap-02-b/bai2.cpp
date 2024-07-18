#include <iostream>
#include<stdlib.h>
using namespace std;

int myRandom(int n)
{
    return rand() % n;
}

int main() {
    int n;
    cin >> n;

    cout << myRandom(n);

    return 0;
}