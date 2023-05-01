//Write a C Program to find sum of N integers.

#include <stdio.h>

int main()
{
    int N, S, M;
    S=0;
    printf("Enter the number of integers: ");
    scanf("%d", &N);
    
    printf("ENTER THE NUMBERS");
    
    for (int i=0; i<N; i++)
    {
       scanf("%d", &M);
       S = S+M;
    }
    
    printf("SUM = %d",S);
    return 0;
}

