#include <stdio.h> 

int GCD(int num1, int num2) 
{ 
	while (num1%=num2) 
	{ 
		int count=num1; 
		num1=num2; 
		num2=count; 
	} 
	return num2; 
} 
int LCM(int num1, int num2 ){ 
	return (num1*num2)/GCD(num1,num2);
} 
int main() 
{ 
	int num1, num2, num3, HCF;
	printf("Enter the three numbers:\n");
	scanf("%d %d %d",&num1, &num2, &num3); 
	
	int x=GCD(GCD(num1, num2), num3); 
	printf("The GCD is:%d", x);
	
	int y= LCM(LCM(num1, num2), num3);
	printf("\nThe LCM is:%d", y);
	
	return 0; 
}

