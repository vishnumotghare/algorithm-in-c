#include <stdio.h>

struct gcd {
	int numerator;
	int denometer;
};

int gcd(int u,int v)
{
	int t;
	while (u > 0) {
		if (u < v) {
			t = u;
			u = v;
			v = t;
		}
		u = u%v;
	}
	return v;
}
int main()
{
	int x,y,gcd_x_y;
	struct gcd fra;
	while (scanf("%d %d",&fra.numerator,&fra.denometer) != EOF) {
		if (fra.numerator > 0 && fra.denometer > 0)
			gcd_x_y = gcd(fra.numerator,fra.denometer);
	
		x = fra.numerator;
		y = fra.denometer;
		fra.numerator /= gcd_x_y;
		fra.denometer /= gcd_x_y;
	
		printf("Lowest common factor of (%d/%d) = (%d/%d) ", x,y,fra.numerator,fra.denometer);
		printf("\n");
	}		
}