#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j=0,rows,num=0,count=0,spaceCount;
    printf("Enter the number of rows you want:");
    scanf("%d",&rows);
    for(i=1; i<=rows; ++i){//outer for loop(parent)
        for(spaceCount=1; spaceCount<=rows-i; spaceCount++){
            printf(" ");//print space for Pyramid pattern
            count++;
        }
        while(j!=2*i-1)
        {
            if(count<=rows-1)
            {
                printf("%d", i+j);
                ++count;
            }
            else{
                num++;
                printf("%d",(i+j-2*num));
            }
            ++j;
        }
        num=count=j=0;
    printf("\n");
}
    return 0;
}
