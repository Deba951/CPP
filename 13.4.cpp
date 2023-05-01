//Write a C Program to count the frequency of array elements in a 1-D array
#include <stdio.h>    
#include <limits.h>  
void frequency(int *arr, int L, int *freq){
	int i, j, visited = INT_MIN, count;    
        
    for(i = 0; i < L; i++){ // 2 3 3 3 3 3   
        count = 1;    
        if(arr[i] != visited){ //2
			for(j = i+1; j < L; j++){    
				if(*(arr+i) == *(arr+j)){    
					count++;  //2    
					*(freq+j) = visited;    
				}    
			}  
		}
		
if(freq[i] != visited)    
			freq[i] = count; //2 1,    
    }          
  
}        
int main()    {      
    int arr[] = {11, 2, 18, 30, 11, 18, 19, 0, -9};     
    int L = sizeof(arr)/sizeof(arr[0]), freq[L], visited = INT_MIN;    
    frequency(arr, L, freq);        
	for(int i = 0; i < L; i++)    
        if(freq[i] != visited) 
            printf("%d\t%d\n", arr[i], freq[i]); 
    return 0;
}
