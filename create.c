#include <stdio.h>
#include "main.h"
/**partitoin - a function that arrange a list
* @arr: - the first parameters to be passed
* @low: - the second parameters to be passed
* @high: - the third parameters to be passed
* 
* return: an interger when done
*/
int main()
{
	int arr[9] = {45,65,11,1,3,4,5,6,7,89};
	int i = 0;
	int a[9] = _partition1(arr[9], 0, 9);
	for (i = 0; i <= 9; i++)
	{
		printf("%d\n", a[0]);
	}
}
int _partition1(int arr[9], int high, int low)
{
	int pivot = arr[5];
	int i = low;
	int end = high;
	while (i <= high)
	{
		if (arr[low] <= pivot)
		{
			low++;
		}
		if (arr[high] > pivot)
		{
			high--;
		}
		
		 swap(&arr[low], &arr[high]);
		
		i++;
	}
	return arr;
}