// WAF in C to find the arithmetic mean, variance and standard deviation of any n values.

#include<stdio.h>
#include<math.h>
int main()
{
   int i,num;
   float std_dev, sum=0, sum1=0, mean, variance=0.0, a[50];
   printf("Enter the number: ");
   scanf("%d",&num);
   printf("\nEnter numbers : ");
   for(i=0;i<num;i++)
   {
      scanf("%f",&a[i]);
      sum=sum+a[i];
   }
   mean=sum/num;
   sum1=0;
   for(i=0;i<num;i++)
    {
     	sum1=sum1+(a[i]-mean)*(a[i]-mean);
    }
     variance=sum1/num;
     std_dev=sqrt(variance);
     
     printf("\nMean of %d numbers= %f\n",num,mean);
     printf("\nVariance of %d numbers= %f\n",num,variance);
     printf("\nStandard deviation of %d numbers= %f\n",num,std_dev);
     
     return 0;
}
