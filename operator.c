#include<stdio.h>

void main(){
	
	int a = 83; 
	int b = 10;
	
	//Airthmetic Op
	int sum = a + b;
	printf("Sum of %d and %d = %d\n",a,b,sum);
	
	int sub = a - b;
	printf("Sub of %d and %d = %d\n",a,b,sub);
	
	int mul = a * b;
	printf("Mul of %d and %d = %d\n",a,b,mul);
	
	
	float div = a / b;
	printf("Div of %d and %d = %.2f\n",a,b,div);
	
	int mod = a % b;
	printf("Mod of %d and %d = %d\n",a,b,mod);
	
	a++; //84
	a-=20; // a = a + 20 = 84 + 20 = 104
	b--;
	
	printf("Value of a =  %d and b = %d",a,b);
	
}