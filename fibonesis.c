#include <stdio.h>

int main()
{
	int num;
	int n1,n2;
	n1 = 0;
	n2 = 1;
	unsigned int sum;
	printf("Enter limit\n");
	scanf("%d",&num);
	
	while (num) {
		sum = n1 + n2;
		n1 = n2;
		n2 = sum;
		printf("%u ",sum);
		num--;
	}
	
}