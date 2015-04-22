#include <stdio.h>

int main()
{
	int num,i, flag = 1;
	printf("Enter number\n");
	scanf("%d",&num);
	
	for (i=2; i<=num/2;i++) {
		if (num%i == 0) {
			flag = 0;
			break;
		}	
	}
	if (flag == 0)
		printf("Number is not prime number\n");
	else
		printf("Number is prime number\n");
	
	return 0;
}