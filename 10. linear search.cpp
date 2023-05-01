// WAP in C to to search the key value in a set of n values. Print the position of the key value if it is a successful search using Linear Search.

#include<stdio.h>
int main()
{
	int arr[50], x, i, num;
	
	printf("Enter the value of element: ");
	scanf("%d", &num);
	printf("Enter %d integer: ", num);
	
	for(i=0; i<num; i++)
	scanf("%d", &arr[i]);
	
	printf("Enter a number: ");
	scanf("%d", &x);
	
	for(i=0; i<num; i++)
	{
		if(arr[i]==x)
		{
			printf("%d is the present location %d", x, i+1);
			break;
		}
	}
	if(i==num)
	printf("%d is not the present location", x);
	
	return 0;
}


