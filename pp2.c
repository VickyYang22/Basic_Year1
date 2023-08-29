#include<stdio.h>
main(){
	int x ;
	printf ("Enter your score\n");
	scanf("%d",&x);
	printf("Your score is %d\n",x);
	
	if (x>=90 ){
		printf("your grade is A\n");
	}
	else if (x>=80){
		printf("your grade is B\n");
	}
	else if (x>=70){
		printf("your grade is C\n");
	}
	else if (x>=60){
		printf("your grade is D+\n");
	}
	else if (x>=50){
		printf("your grade is D\n");
	}
	else if (x<=49){
		printf("your grade is F\n");
	}
}
