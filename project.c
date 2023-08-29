#include<stdio.h>
void main(){
	float a,b,h,A;
	
	printf("enter value h = ");
	scanf("%f",&h);
	printf("enter value a = ");
	scanf("%f",&a);
	printf("enter value b = ");
	scanf("%f",&b);
	
	printf("h= %0.2f\n",h);
	printf("a= %0.2f\n",a);
	printf("b= %0.2f\n",b);
	
	A=((a+b)*h)/2;
	printf("A=1/2*(%0.2f*%0.2f)*%0.2f\n",a,b,h);
	printf("A=%0.2f",A);
	
	getch();
	
}
