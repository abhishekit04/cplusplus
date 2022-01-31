// Reverse using recursion

#include <iostream>
using namespace std;

int reverse(int num) {
	static int temp,sum;
	if(num>0){
		temp=num%10;
		sum=sum*10+temp;
		reverse(num/10);
	} 
	else{
		return sum;
	}
}

int main() {
	int num,rev;
	cout<<"enter number";
	cin>>num;
	rev=reverse(num);
	cout<<"reverse of a input number is"<<rev;
	return 0;
}
