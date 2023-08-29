#include<stdio.h>
int main(){
	int copong,all,money,choice,Y,N;
	char result;
	Y=1;
	N=0;
	printf("***Welcome to 3P Mini Mark***");
	printf("Enter Your Money = ");
	scanf("%d",&money);
	printf("Total Price = %d\n",money);
	prnitf("Do you have Copong(Y/N) = ");
	scanf("%c",&result);
	if (result==Y){
		printf("Enter Your Choice 1 2 3 4 =" );
		scanf("%d",&choice);
		if(choice==1){
			all=money-2000;
			printf("Payment = %d",all);
		}
	}
	
getch();
	
}
