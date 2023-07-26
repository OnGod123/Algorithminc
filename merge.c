void merge(int first_array[], int first_length, int sec_array[], int sec_length, int merge_array[], int merge_length)
{
    int item1, item2, item3;
    int n = 0, j = 0, k = 0;
    item1 = first_length;
    item2 = sec_length;
    item3 = merge_length;
    while (n < item1 && j < item2)
    {
        if (first_array[n] < sec_array[j])
        {
            merge_array[k] = first_array[n];
            n++;
            k++;
        }
        else {
            merge_array[k] = sec_array[j];
            j++;
            k++;
        }

    }
    while (n < item1)
    {
        merge_array[k] = first_array[n];
        n++;
        k++;
    }
    while (j < item2)
    {
        merge_array[k] = sec_array[j];
        k++;
        j++;
    }
}