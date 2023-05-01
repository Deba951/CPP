//Write a C Program to sort a set of n number in ascending order using Bubble sort.
#include <stdio.h>

int main()
{
  int n, i, j, swap;

  printf("Enter number of elements\n");
  scanf("%d", &n);
	
	int array[n];
  printf("Enter %d integers\n");

  for (i = 0; i < n; i++)
    scanf("%d", &array[i]);

  for (i = 0 ; i < n - 1; i++)
  {
    for (j = 0 ; j < n - i - 1; j++)
    {
      if (array[j] > array[j+1]) 
      {
        swap = array[j];
        array[j] = array[j+1];
        array[j+1] = swap;
      }
    }
  }

  printf("Sorted list in ascending order:\n");

  for (i = 0; i < n; i++)
  	{
    	printf("%d\n", array[i]);
	}
     printf("Sorted list in descending order:\n");
     for (j = n; j >= 0; j--)
     {
     	printf("%d\n", array[j]);
     }

  return 0;
}
