#include <stdio.h>

int main()
{
	int num;
	int i,j;
	int r;
	int arr[32]= {0};
	
	printf("Enter number\n");
	scanf("%d",&num);
	i = 0;
	while (num) {
		arr[i++] = num%2;
		num /=2;
	}
	
	for (j= i; j>=0;j--) {
		printf("%d",arr[j]);
	}
	return 0;

}