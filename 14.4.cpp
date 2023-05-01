//Write a C Program to count the number of vowels in a string using pointer.

#include <stdio.h>
int main()
{
    char str[10000];
    char *p;
    int  vCount=0;

    printf("Enter any string: ");
    fgets(str, 10000, stdin);

    p=str;

    while(*p!='\0')
    {
        if(*p=='A' ||*p=='E' ||*p=='I' ||*p=='O' ||*p=='U'
        		||*p=='a' ||*p=='e' ||*p=='i' ||*p=='o' ||*p=='u')
            vCount++;
        
        p++;
    }

    printf("Number of Vowels in String: %d\n",vCount);
    return 0;
}
