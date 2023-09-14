#include <stdio.h>  
void printarray(char *arr, int size)  
{  
    printf("Elements of array are : ");  
    for(int i=0;i<size;i++)  
    {  
        printf("%c ", arr[i]);  
    }  
}  
int main()  
{  
  char alpha[]={'A','B'};  
  char alfha[]={'A','B','C','D','E','F'};  
  printarray(alpha , sizeof(alpha));  
  printarray(alfha , 6);  
  return 0;  
}  