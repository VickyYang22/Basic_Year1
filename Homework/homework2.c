#include <stdio.h>
main(){
	int x,y,z1,z2;
	x = y = 2;
	z1 = x*x + 2*x*y + y*y;
	z2 = x*x*x + 3*x*x*y + y*y*y;
	printf("z1=x(2)+2xy+y(2)=%d\n",z1);
	printf("z2=2x(2)+3X(2)y+y(3)=%d\n" , z2);
	
	
	printf("10>9 %d\n", 10>9);
	printf("10<9 %d\n", 10<9);
	
	int v,k;
	printf("enter two numbers : ");
	scanf("%d %d", &v, &k);
	printf("value v = %d \nvalue k = %d",v,k);
	
	char o[20], p[25] ="welcome to Hello World";
	puts("\nwhat is your name?");
	gets(o);
	printf("my name is %s\n", o);
	puts(p);
	
	getch(); 
}
