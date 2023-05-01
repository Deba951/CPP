// WAP in C to sort a set of n number in ascending order using Selection sort.

#include<stdio.h>
int main()
{
	int arr[50];
	int i, j, num, swap, temp;
	
	printf("Enter the value of number:");
	scanf("%d", &num);
	printf("Enter the elements: \n");
	for(i=0; i<num; i++)
	scanf("%d", &arr[i]);
	
	for(i=0; i<=(num-2);i++)
	{
		temp=i;
		for(j=i+1; j<=num-1; j++)
		{
			if(arr[temp]>arr[j])
			temp=j;
		}
		if(temp !=i)
		{
			swap=arr[i];
			arr[i]=arr[temp];
			arr[temp]=swap;
		}
	}
	printf("The sorted array in acending order: ");
	for(i=0; i<num; i++)
	printf("%d",arr[i]);
	
	return 0;
}
