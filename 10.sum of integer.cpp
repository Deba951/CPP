// WAP in C to find sum of N integers.

#include<stdio.h>
int main()
{
	int i, j, num, sum=0;
	int arr[num];
	printf("Enter the value of number: ");
	scanf("%d", &num);
	
	printf("Enter the elements:");
	for(i=0; i<num; i++)
	{
		scanf("%d", &arr[i]);
	}
	for(j=0; j<num; j++)
	{
		sum=sum+arr[j];
	}
	printf("The sum of array is: %d", sum);
	
	return 0;
}

