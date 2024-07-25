// bai5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int** inputMatrix(int nRows, int nCols)
{
    int** matrix = new int* [nRows];
    for (int i = 0; i < nRows; ++i)
    {
        matrix[i] = new int[nCols];
    }
    for (int i = 0; i < nRows; ++i)
    {
        for (int j = 0; j < nCols; ++j)
        {
            cin >> matrix[i][j];
        }
    }

    return matrix;
}

void printMatrix(int** matrix, int nRows, int nCols)
{
    for (int i = 0; i < nRows; ++i)
    {
        for (int j = 0; j < nCols; ++j)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int m, n;
    cin >> m >> n;
    int** Matrix = inputMatrix(m, n);
    printMatrix(Matrix, m, n);
    for (int i = 0; i < m; i++)
        delete[] Matrix[i];
    delete[] Matrix;
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
