#include <stdio.h>

int gcd (int u,int v)
{
	int t;
		while (u > 0) {
			if (u < v) {
			t = u;
			u = v;
			v = t;
				
			}
			u = u % v;
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