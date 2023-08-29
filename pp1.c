#include<stdio.h>
main(){
	int x,y,z;
	printf("z=2x^3-2xy^2+y^3\n");
	printf("Enter Value x and y\n");
	scanf("%d %d",&x,&y);
	printf("x = %d ; y = %d\n",x,y);
	z=(2*x^3)-(2*x*y^2)+y^3;
	printf("\tz = %d ",z);
	getch();
}
