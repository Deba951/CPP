// WAP in C to find first three largest elements in a 1D array.

#include<stdio.h>
int main()
{
    int i, j, a[100], num, temp;
 
	printf("Enter the number: ");
	scanf("%d", &num);
	
	printf("Enter array element:\n");
 	for(i=0; i<num; i++)
	scanf("%d", &a[i]);
	
	for (i=0; i<num; i++)
	{
		for (j=0; j<num-i; j++) 
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
    }
    printf("The first largest element is: %d", a[num-1]);
	printf("\nThe second lardest element is: %d", a[num-2]);
 	printf("\nThe third largest element is: %d", a[num-3]);
 	
 	return 0;
}
