// WAP in C to sort a set of n number in ascending order using Modified Bubble sort.

#include<stdio.h>
int main()
{
	int i, j, num, x, temp, flag;
	int arr[50];
		
	printf("Enter the value of number: ");
	scanf("%d", &num);
	
	printf("Enter the elements: \n");
	for(i=0; i<num; i++)
	scanf("%d", &arr[i]);
	
	printf("After sorting in each itration: ");
	for(i=0; i<=(num-2); i++)
	{
		flag=0;
		for(j=0; j<=(num-i-2); j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
				flag=1; 
			}
		}
		for(x=0; x<num; x++)
		{
			printf("%d",arr[x]);
		}
		printf("\n");
		if(flag==0)
		break;
	}
	return 0;
}

