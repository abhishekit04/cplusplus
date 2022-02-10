//Program for all additation subtraction multiplication division

#include<stdio.h>
#include<conio.h>

int main () {
	int num1, num2, sum, diff, pro, div, rem;
	printf("Enter two numbers\n");
	scanf("%d %d", &num1, &num2);
	sum = num1 + num2;
	printf("%d + %d = %d", num1, num2, sum );
	
	printf("\n------\n");
	
	printf("Enter the two numbers\n");
	scanf("%d %d", &num1, &num2);
	diff = num1 - num2;
	printf("%d - %d = %d", num1, num2, diff);
	
	printf("\n----------\n");
	
	
	printf("Enter the two numbers to find their product\n");
	scanf("%d %d", &num1, &num2);
	pro = num1 * num2;
	printf("%d * %d = %d", num1, num2, pro);
	
	printf("\n---------\n");
	
	printf("Enter the two numbers to find quoitent \n");
	scanf("%d %d", &num1, &num2);
	div = num1/num2;
	printf("%d / %d = %d", num1, num2, div);
	
	printf("\n---------\n");
	
	printf("Enter the two numbers to find remainder\n");
	scanf("%d %d", &num1, &num2);
	rem = num1%num2;
	printf("%d %% %d = %d", num1, num2, rem);
	
	
	return 0;
	
}
	
	
