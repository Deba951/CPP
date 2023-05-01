// WAP in C to sort a set of n number in ascending order using Bubble sort.

#include<stdio.h>
int main()
{
	int i, j, num, temp;
	int arr[50];
	
	printf("Enter the value of number: ");
	scanf("%d", &num);
	printf("Enter the elements: \n");
	for(i=0; i<num; i++)
	{
		scanf("%d", &arr[i]);
	}
	for(i=0; i<(num-1); i++)
	{
		for(j=0; j<(num-i-1); j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("The Ascending array is: \n");
	for(i=0; i<num; i++)
	printf("%d\n", arr[i]);
	
	for(i=0; i<(num-1); i++)
	{
		for(j=0; j<(num-i-1); j++)
		{
			if(arr[j]<arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("The Descending array is: \n");
	for(i=0; i<num; i++)
	{
		printf("%d\n", arr[i]);
	}
	return 0;
}
