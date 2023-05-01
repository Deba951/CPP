#include<stdio.h>

int main()
{
	int i, j, max=5;
	int space=0;
	/*run loop (parent loop) till number of rows*/
	for(i=max;i>0;i--)
	{
		/*print first set of stars*/
		for(j=0;j< i;j++)
		{
			printf("*");
		}
		for(j=0;j< space;j++)
		{
			printf(" ");
		}
		/*print second set of stars*/
		for(j=0;j< i;j++)
		{
			printf("*");
		}
		
		printf("\n");
		space+=2;
	}
    return 0;
}
