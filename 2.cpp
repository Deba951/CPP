#include <stdio.h>
#include <stdlib.h>
// Program 8b //
int main()
{
	
	int i, j, rows, k = 0;
	printf("\n Enter the number of rows: ");
	scanf("%d", &rows);
	for (i = 1; i <= rows; i ++)
	{
		for (j = 1; j <= rows; j ++)
		{
			if((i + j)<= rows)
			printf(" ");
			else
			printf("%d",k++);
		}
		printf("\n");
	}
	return 0;
}


