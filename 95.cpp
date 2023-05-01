#include<stdio.h>

int main()
{
	int i,j,k,l=8,m,n,o,p;
	for(i=0; i<=4; i++)
	{
		for(j=0; j<=i; j++)
		{	
			printf("*");
		}
		for(k=1; k<=l; k++)
		{
			printf(" ");
		}
			l = l-2;
		for(m=0; m<=i; m++)
		{
			printf("*");	
		}

		printf("\n");
	}
    return 0;
}
