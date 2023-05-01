#include <stdio.h>
#include <stdlib.h>
int input_array(int n, int arr[100]);
void count(int n, int arr[100]);
int main()
{
	int n, arr[100];
	printf("\n Enter the number of elements: ");
	scanf("%d", &n);
	printf("\n Enter the elements of the array : \n");
	int a = input_array(n, arr);
	return 0;
}
int input_array(int n, int arr[100])
{
	int i;
	for (i = 0; i < n; i ++)
	{
		scanf("%d", &arr[i]);
	}
	count (n, arr);
	return arr[0];
}
void count(int n, int arr[100])
{
	int *ptr;
	int i, c1 = 0, c2 = 0, c3 = 0;
	ptr = arr;
	for (i = 0; i < n; i ++)
	{
		if ((*ptr % 2 == 0) && (*ptr != 0))
		{
			c1 ++;
		}
		else if ((*ptr % 2 != 0) && (*ptr != 0))
		{
			c2 ++;
		}
		else
		{
			c3 ++;
		}
		ptr ++;
	}
	printf("\n The count of the even numuber is %d", c1);
	printf("\n The count of the odd numuber is %d", c2);
	printf("\n The count of the zeroes is %d", c3);
}
