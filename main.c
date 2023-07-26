#include <stdio.h>
int main() {
    int i = 0;
    int first_array[5] = { 1,3,5,7,9 };
    int sec_array[8] = { 2,4,6,8,10,12,14,16 };
    int merge_array[100];
    merge(first_array, 5, sec_array, 8, merge_array, 13);
    for (i = 0; i < 13; i++)
    {
        printf("%d\n", merge_array[i]);
    }
}