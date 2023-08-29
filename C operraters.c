#include<stdio.h>
main (){
	int x,y,z;
	x=y=2;
	z=x*x+2*x*y+y*y;
	printf("**************************************");
	printf("\nz=x(2)+2*x*y+y(2)");
	printf(" / \tx=%d\ty=%d",z,y);
	printf("\nz=(%dx%d)+(2x%dx%d)+(%dx%d)",x,x,x,y,y,y);
	printf("\nz=%d",z);
	printf("\n**************************************");
	getch();
}
