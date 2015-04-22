#include <stdio.h>

int main()
{
	int arr[] = {6,2,3,4,5};
	int i, max;
	
	max = arr[0];
	
	for (i = 1; i < 5; i++) {
		if (max <= arr[i])
			max = arr[i];
	}
	printf("largest = %d\n",max);
	return 0;
}