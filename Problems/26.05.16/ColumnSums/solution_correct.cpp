void columnSums(const int (*matrix)[4], int rows, int* sums)
{
    for (int j = 0; j != 4; ++j)
        sums[j] = 0;

    if (matrix == nullptr || rows <= 0)
        return;

    for (int i = 0; i != rows; ++i)
    {
        for (int j = 0; j != 4; ++j)
        {
            sums[j] += matrix[i][j];
        }
    }
}