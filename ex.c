#include<stdio.h>

int main(){
	int money,OT,gasoline,all;
//    char ID[10], Name[10];
//    char EN001[20]="Lex Phansana", EN002[20]="Vicky Yang";
int ID;
    printf("ENTER YOUR ID = ");
	scanf("%d",&ID);
	switch(ID){
	case 001: printf("\t\t\tEN001.Lex Phansana");break;
	case 002: printf("\t\t\tEN002.Vicky Yang");break;
	case 003: printf("\t\t\tEN003.Bert Thongxai");break;
	default : printf("can't see your name\n");
	}
 	

	
//    printf("ENTER YOUR ID = ");
//    scanf("%s",&ID);
//	
//    printf("ENTER YOUR NAME = ");
//    scanf("%s",&Name);
//
//    printf("ENTER YOUR ID = ");
//	printf("%s = %s\n ",ID,Name);

	printf("\nENTER YOUR MONEY = ");
	scanf("%d",&money);
	printf("\t\t\tYOUR MONEY = %d\n ",money);
	
	printf("ENTER YOUR OT = ");
	scanf("%d",&OT);
	printf("\t\t\tYOUR OT = %d\n ",OT);
	
	printf("ENTER YOUR gasoline = ");
	scanf("%d",&gasoline);
	printf("\t\t\tYOUR gasoline = %d\n ",gasoline);
	
	all = OT +gasoline + money - ( money * (0.5/100));

printf("**********************************************************\n");
	printf("\t\tYOUR MONEY FOR THIS MONTH IS %d",all);
	getch();
}
