//Program for calculating  Simple interest

#include<stdio.h> 

int main() {
	int p, r, t;
	float si; 
	printf("Enter values of p,r and t :\n");
	scanf("%d%d%d",&p,&r,&t);
	
	si = p*r*t/100;
	printf("\nPricipal = %d", p);
	printf("\nRate  = %d", r);
	printf("\nTime = %d", t);
	
	printf("\nSimple Interest = %.2f", si);
	
	return 0;
}
