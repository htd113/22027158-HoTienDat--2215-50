#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int original = n, reversed = 0;
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    return original == reversed;
}

int countPalindromes(int A, int B) {
    int count = 0;
    for (int i = A; i <= B; ++i) {
        if (isPalindrome(i)) {
            count++;
        }
    }
    return count;
}

int main() {
    int A, B;
    int N, result[100];
    int i = 0;
    cin >> N;
    int size = N;
    while (N > 0)
    {
        cin >> A >> B;
        result[i] = countPalindromes(A, B);
        i++;
        N--;
    }
    for (int i = 0; i < size; ++i)
    {
        cout << result[i] << endl;
    }
    return 0;
}
