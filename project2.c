#include<stdio.h>

int main(){
	int money,OT,OIL,all;
    char ID[10], Name[10];
	
    printf("ENTER YOUR ID = ");
    scanf("%s",&ID);
	
    printf("ENTER YOUR NAME = ");
    scanf("%s",&Name);

//    printf("ENTER YOUR ID = ");
	printf("%s = %s\n ",ID,Name);

	printf("ENTER YOUR MONEY = ");
	scanf("%d",&money);
	printf("YOUR MONEY = %d\n ",money);
	
	printf("ENTER YOUR OT = ");
	scanf("%d",&OT);
	printf("YOUR OT = %d\n ",OT);
	
	printf("ENTER YOUR OIL = ");
	scanf("%d",&OIL);
	printf("YOUR OIL = %d\n ",OIL);
	
	all = OT +OIL + money - ( money * (0.5/100));

	printf("YOUR MONEY FOR THIS MONTH IS %d",all);
	getch();
	}
