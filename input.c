#include<stdio.h>
int main(){
	
//	
	
	int X,Y,Z1,Z2,Z3,Z4;
	printf("enter value X = ");
	scanf("%d",&X);
	printf("enter value Y = ");
	scanf("%d",&Y);
	printf("your enter X is %d\n",X);
	printf("your enter Y is %d\n",Y);
	Z1=X+Y;
	Z2=X-Y;
	Z3=X*Y;
	Z4=X/Y;
	printf("*************************************\n");
	printf("Z1=%d+%ld",X,Y);
	printf("\tZ1=%d",Z1);
	printf("\nZ2=%d-%ld",X,Y);
	printf("\tZ2=%d",Z2);
	printf("\nZ3=%d*%ld",X,Y);
	printf("\tZ3=%d",Z3);
	printf("\nZ4=%d/%ld",X,Y);
	printf("\tZ4=%d",Z4);
    printf("\n*************************************\n");
    
//    
    
    float h,a,b,S;
    
    
    printf("enter value h = ");
	scanf("%f",&h);
	printf("enter value a = ");
	scanf("%f",&a);
	printf("enter value b = ");
	scanf("%f",&b);
    
    printf("\n\t *");
    printf("\n\t **");
    printf("\n\t ****");
    printf("\n\t ******");
    printf("\n\t *******");
    printf("\n\t *********");
    printf("\n\t ***********");
    S=(a*h)/2;
    printf("\n*************************************\n");
    printf("\tS=(1/2)*a*h=%0.2f",S);
    printf("\n\tS=%0.2f",S);
    printf("\n*************************************\n");
    
	getch();
}
