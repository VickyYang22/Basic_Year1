#include<stdio.h>
main(){
	int Money,OT,Subsidy,all;
	char ID[5],Name[20];
	printf("Enter your ID = ");
	scanf("%s",&ID);
	printf("Your ID ID is %s \n",ID);
	
	printf("Enter you Name = ");
	scanf("%s", &Name);
	printf("Your Name is %s \n",Name);
	
	printf("Enter you Money = ");
	scanf("%d", &Money);
	printf("Your Money is %d \n",Money);
	
	printf("Enter you Subsidy = ");
	scanf("%d", &Subsidy);
	printf("Your Subsidy is %d \n",Subsidy);
	
	printf("Enter you OT = ");
	scanf("%d", &OT);
	printf("Your OT is %d \n",OT);
	
	int Month;
	Month=OT+Subsidy+Money;
	
	if (Month>=800000){
		all = Month - ( Money * (0.5/100));
		printf("Your Money is = %d",all);
	}
	
	else if (Month>=1000000){
		all = Month - ( Money * (1/100));
		printf("Your Money is = %d",all);
	}
	
	else if (Month>=1200000){
		all = Month - ( Money * (2/100));
		printf("Your Money is = %d",all);
	}
	
	else if (Month<=799999){
		all = Month - ( Money * (0/100));
		printf(" Your Money is = %d",all);
	}
	
	getch();
	
}
