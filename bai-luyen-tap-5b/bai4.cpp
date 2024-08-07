#include <iostream>
using namespace std;

void generate_magic_square(int N) {
    int magic_square[100][100] = { 0 };

    // kh?i t?o v? trí c?a s?  1
    int row = 0, col = N / 2;

    // t?o ma tr?n vuông có các s? kì ?o
    for (int num = 1; num <= N * N; ++num) {
        magic_square[row][col] = num;
        int new_row = (row - 1 + N) % N;
        int new_col = (col + 1) % N;

        // n?u ch? c?n ?i?n ?ã b? ?i?n thì di chuy?n xu?ng hàng d??i
        if (magic_square[new_row][new_col] != 0) {
            row = (row + 1) % N;
        }
        else
        {
            row = new_row;
            col = new_col;
        }
    }

    // Print
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << magic_square[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int N;
    cin >> N;
    generate_magic_square(N);
    return 0;
}
