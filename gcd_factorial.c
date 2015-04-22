#include <stdio.h>

int gcd(int u, int v)
{
	int r;
	while (1) {
		if ((r = u%v) == 0)
			break;
		u = v;
		v = r;
	}
	return v;
}
int main()
{
	int x,y;
	while (scanf("%d %d",&x,&y) != EOF)
		printf("GCD = %d\n",gcd(x,y));
	return 0;
	
}