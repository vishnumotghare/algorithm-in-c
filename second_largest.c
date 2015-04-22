#include <stdio.h>

int main()
{
	int arr[] = {6,2,3,1,5};
	int first_large,second_large;
	int i;
	
	first_large = arr[0];
	second_large = arr[1];
	
	if (first_large < second_large) {
		first_large = second_large;
	second_large = arr[0];
	}
	for (i = 2; i<5;i++) {
		if (first_large < arr[i]) {
			second_large = first_large;
			first_large = arr[i];
		}
	}
	printf("second largest = %d\n",second_large);
	
	return 0;
}