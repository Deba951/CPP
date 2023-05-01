//SUM OF SERIES S = x + (x-1) + (x-2) + (x-3) + ......... +nth term.

#include <stdio.h>

int main()
{
    int n, x, s1, s2=0, i;
    printf("\n Enter the value of n: ");
    scanf("%d", &n);
    printf("\n Enter the value of x: ");
    scanf("%d", &x);
    
	s1 = n*x; //FIRST PART
    
	for (i = 0; i < n; i ++) //SECOND PART
    {
        s2 = s2 + i;
    }
    
	int s = s1 - s2; //TOTAL
    
	printf("\n The sum of the series is: %d", s);
    return 0;
}
