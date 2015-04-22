#include <stdio.h>

int main()
{
	int m ,n;
	int max,r;
	printf("Enter two number\n");
	scanf("%d %d",&m,&n);
	if (m > n)
		max = m;
	else
		max=n;
	printf("m = %d n = %d, max = %d\n",m,n,max);
	
	if (n ==0)
		printf("GCD of num %d and %d is %d ",m,n,m);
	while (r != 0) {
		r = m%n;
		if (r == 0)
			break;
		m = n;
		n=r;
	
	}
	
	if (r ==0)
		printf("GCD = %d\n",n);
	return 0;
	
	
}