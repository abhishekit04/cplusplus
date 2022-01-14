// Addition of two numbers using scanf

#include<stdio.h>
#include<conio.h>

int main () {
	int num1, num2, sum;
	printf("Enter the two numbers\n");
	scanf("%d %d",&num1, &num2 );
	sum = num1 + num2;
	printf("%d + %d = %d", num1 , num2, sum );
	
	
	getch();
	return 0;
	 
}
