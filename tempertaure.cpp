#include<stdio.h>

int main () {
	float f, c;
	printf("enter tempertaure into celesius ");
	scanf("%f",&c);
	f = ((float)9/(float)5 * c)+ 32;
    printf("temperature in fahrenheit = %.2f ", f);    
	
//	convert into celcius
	
	printf("enter the temperature into fahrenheit");
	scanf("%f",&f);
	c=(5*(f-32)/9);
	printf("temperature in celcius = %.2f", c); 
}
