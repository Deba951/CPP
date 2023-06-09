//Key search using Binary Search
#include <stdio.h>
 
int main ()
{
   int c, first, last, middle, n, search;
   printf("Enter number of elements: \n");
   scanf("%d",&n); 
   
   int array[n];
   printf("Enter the integers:\n");

   for (c = 0; c < n; c++)
      scanf("%d",&array[c]); 

   printf("Enter the value to find:\n");
   scanf("%d", &search);
   first = 0;
   last = n - 1;
   middle = (first+last)/2;
 
   while (first <= last) 
   {
      if (array[middle] < search)
         first = middle + 1;    
      else if (array[middle] == search) 
	  {
         printf("%d is present at index %d.\n", search, middle+1);
         break;
      }
      else
         last = middle - 1;
      middle = (first + last)/2;
   }
   if (first > last)
      printf("Not found! %d is not present in the list.\n", search);
   return 0;  
}
