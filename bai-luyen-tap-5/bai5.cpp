int** transpose(int** matrix, int nRows, int nCols)
{
    int** new_matrix = new int* [nCols];
    for (int i = 0; i < nCols; ++i)
    {
        new_matrix[i] = new int[nRows];
    }

    for (int i = 0; i < nCols; ++i)
    {
        for (int j = 0; j < nRows; ++j)
        {
            new_matrix[i][j] = matrix[j][i];
        }
    }
    return new_matrix;
}