// WAP in C to count the frequency of array elements in a 2-D array (Use call by address).

#include<stdio.h>
int freq(int[][50],int,int);

int main()
{
     int num1, num2, i, j;
     printf("Enter the value: ");
     scanf("%d%d",&num1, &num2);
     
     int arr[num1][50];
     printf("Enter the array elements:\n");
     for(i=0;i<num1;i++)
     {
       for(j=0;j<num2;j++) 
       {
          scanf("%d",&arr[i][j]);
       }
     }
     freq(arr,num1,num2);
     return(0);
}
int freq(int arr[][50],int num1, int num2) 
{
     int i, j, count=0, num;
     int x, y, z[num1][num2];
     for(i=0;i<num1;i++)
	  {
       for(j=0; j<num2;j++) 
	   {
          count=1;
          num=arr[i][j];
          if(z[i][j]!=1) 
		  {
          for(x=0;x<num1;x++) 
		  {
            for(y=0;y<num2;y++) 
			{
              if((i==x)&&(j==y)) 
			  {
                continue;
              }
              	if(arr[i][j]==arr[x][y])
			  {
                	z[x][y]=1;
                	count++;
              }
            }
          }
          printf("\nThe frequency of element %d occurs %d times", num, count);
          }
       }
     }
     return 0;
}

