#include<stdio.h>
int main()
{
   int n, i, psum=0, nsum=0;

   printf("Enter array size : ");
   scanf("%d",&n);
   int a[n];
   printf("Enter %d elements: ",n);

   for(i=0; i<n; i++)
   {
     scanf("%d",&a[i]);
     if(a[i]<0) nsum += a[i];
     else psum += a[i];
   }

   printf("All Positive numbers sum: %d",psum);
   printf("\nAll Negative numbers sum: %d",nsum);
   printf("\nTotal sum = %d", psum+nsum);

   return 0;
}
