#include <stdio.h>
#include <stdlib.h> 

void create_array(int array[], int low, int high)
{
    int mid = (low + high) / 2;

    // Use dynamic memory allocation (malloc) to create array1 and array2
    int* array1 = (int*)malloc((mid + 1) * sizeof(int));
    int* array2 = (int*)malloc((high - mid) * sizeof(int));

    for (int i = 0; i <= mid; i++)
    {
        array1[i] = array[i];
        printf("array1[%d] = %d\n", i, array1[i]);
    }

    int x = 0;
    for (int j = mid + 1; j <= high; j++)
    {
        array2[x] = array[j];
        printf("array2[%d] = %d\n", x, array2[x]);
        x++;
    }

    // Don't forget to free the dynamically allocated memory
    free(array1);
    free(array2);
}
