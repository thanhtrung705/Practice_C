#include <stdio.h>
#include <stdlib.h>

int main() {	
	float divi();
	int a, b;
	printf("Nhap a ");
	scanf("%d", &a);
	printf("Nhap b ");
	scanf("%d", &b); 
 	printf("%d\n",  plus(a, b));
 	printf("%d\n",  minus(a, b));
 	printf("%f\n", divi(a, b));
 	printf("%d",  multi(a, b));
}
int plus(int a, int b){
 	return a+b;
}
int minus(int a, int b){
 	return a-b;
}
float divi(int a, int b){
	return (float) a/b;
}
int multi(int a, int b){
	return a*b;
}
