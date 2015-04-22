#include <stdio.h>

int id[10];
int union_find(int i)
{
	while (i != id[i])
		i = id[i];
		return i;
}

int root_find(int p,int q)
{
	int i,j;
	i = union_find(p);
	j = union_find(q);
	id[i] = j;
}
void print_arry() {
	int i;
	printf("Print final id arry\n");
		for(i=0;i<10;i++) {
			printf("%d ",id[i]);
		}
		printf("\n");
}
int main()
{
	
	int i,p,q;
	for (i =0 ; i<10;i++) {
		id[i] = i;
	}
	printf("Printid arry\n");
	for(i=0;i<10;i++) {
		printf("%d ",id[i]);
	}
	printf("\n\n");
	
	for (i=0;i<9;i++) {
		printf("Enter valu of P and Q:");
		scanf("%d %d",&p,&q);
		root_find(p,q);
		print_arry();
	}
	
	return 0;
}