// WAP in C to search the key value in a set of n values. Print the position of the key value if it is a successful search using Binary Search.

#include<stdio.h>
int main()
{
	
	int arr[50], i, first, middle, last, x, num;
	
	printf("Enter the value of element: ");
	scanf("%d", &num);
	printf("Enter %d integer: ", num);
	
	for(i=0; i<num; i++)
	scanf("%d", &arr[i]);
	
	printf("Enter a number: ");
	scanf("%d", &x);
	
	first=0;
	last=num-1;
	middle=(first+last)/2;
	
	while(first<=last)
	{
		if(arr[middle]<x)
		first=middle+1;
		else if(arr[middle]==x)
		{
			printf("%d is the present location %d", x, middle+1);
			break;
		}
		else
		last=middle-1;
		middle=(first+last)/2;
	}
	if(first>last)
	printf("%d is not the present location", x);
	
	return 0;
}
