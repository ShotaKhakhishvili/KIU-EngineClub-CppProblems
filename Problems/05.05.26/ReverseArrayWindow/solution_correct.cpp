void reverseArrayWindow(int* values, int size, int left, int right)
{
    if (values == nullptr || size <= 0)
        return;

    if (left < 0)
        left = 0;

    if (right >= size)
        right = size - 1;

    if (left > right)
        return;

    int* first = values + left;
    int* last = values + right;

    while (first < last)
    {
        int temp = *first;
        *first = *last;
        *last = temp;

        ++first;
        --last;
    }
}
