//program to find two numbers equal or not

#include<stdio.h>

int main () {
	int num1, num2 ;
	printf("enter two numbers \n");
	scanf("%d %d", &num1,&num2);
	
	if (num1!=num2) {
		printf("%d is not equal to %d",num1,num2);
		
	} else {
		printf("%d is equal to %d",num2,num1);
		
	}
	return 0;
}
