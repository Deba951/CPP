/* C program to count the number of even and odd elements in an array */
#include <stdio.h>
int main()
{

printf("Enter the number of integers you want to calculate");
int n;
scanf("%d",&n);
int arr[n];

printf("Enter the numbers one by one:");
for(int i = 0; i < n; i++)
scanf("%d",&arr[i]);

int count_odd =0, count_even = 0;
for(int i = 0; i < n; i++)
{
if(arr[i] % 2 == 1)
count_odd++;
else
count_even++;
}

printf("Odd: %d",count_odd);
printf("\nEven: %d",count_even);
return 0;

}
