void flattenMatrix(const int (*matrix)[4], int rows, int* output)
{
    if (matrix == nullptr || rows <= 0)
        return;

    for (int i = 0; i != rows; ++i)
    {
        for (int j = 0; j != 4; ++j)
        {
            output[i * 4 + j] = matrix[i][j];
        }
    }
}