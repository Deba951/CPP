#include <stdio.h>
#include <math.h>

int main()
{
    float x, n, S1, S2, S;
    S1 = 0, S2 = 0;
    
    int i, j, k, l, m, o;
    m=1, o=1;
    
    printf("Enter the value of n:");
    scanf("%f", &n);
	
	printf("\n Enter the value of x: ");
	scanf("%f", &x);
	
	for(i=1; i<=n; i+=2)
	{
	    for(k=1; k<=i; k++)
	    {
	        m = m*k;
	    }
	    S1 = S1 + pow(x,i)/m;
	}
	
	for(j=3; j<=n; j+=2)
	{
	    for(l=1; l<=j; l++)
	    {
	        o=o*l;
	    }
	    S2 = S2 + pow(x,j)/n;
	}
	
	S = S1 - S2;
	printf("\n The sum of the series is %f",S);
	
	return 0;
	
}
