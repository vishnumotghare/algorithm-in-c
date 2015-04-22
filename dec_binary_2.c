#include <stdio.h>

unsigned int find_msb(unsigned int num)
{
	int i;
	int count =0;
	for (i=31; i>=0;i--) {
		if (num & (1 << i))
			break;
		count++;
	}
	return count;
}
int main()
{
	unsigned  num,res;
	int i,k;
	
	printf("Enter number\n");
	scanf("%d",&num);
	res = find_msb(num);
	printf("res = %d\n",res);
	
	printf("%d\n",128>>6);

	printf("res = %d\n",res);
	for (i =31; i>=res;i--) {
	
		k = num >> i;
		if (k&1)
			printf("1");
		else
			printf("0");
	break;
	}
	
	return 0;
}