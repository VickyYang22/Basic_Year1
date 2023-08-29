#include<stdio.h>
int main(){
	int number1,number2,result;
	char choice;
	
//	printf("########################\n\n");
	printf("# Please select choice #\n\n");
//	printf("########################\n\n");
	printf("# 1. Plus        (+)   #\n");
	printf("# 2. Minus       (-)   #\n");
	printf("# 3. Multiply    (*)   #\n");
	printf("# 4. Divide      (/)   #\n");
	printf("# 5. Power       (^)   #\n\n");
//	printf("########################\n\n");
	printf("Please select choice : ");
	scanf("%c",&choice);
	printf("Select : %c \n",choice);
	printf("Enter number 1 : ");
	scanf("%d",&number1);
	printf("Enter number 2 : ");
	scanf("%d",&number2);
	switch(choice){
		case'1':result=number1 + number2;
				printf("%d + %d = %d",number1,number2,result);
				break;
				  
		case'2':result=number1 - number2;
	 			printf("%d - %d = %d",number1,number2,result);
				break;
				
		case'3':result=number1 * number2;
	 			printf("%d * %d = %d",number1,number2,result);
				break;
				
		case'4':result=number1 / number2;
	 			printf("%d / %d = %d",number1,number2,result);
				break;
				
		case'5':result = pow(number1, number2);
	 			printf("%d^(%d) = %d",number1,number2,result);
				break;
			
		default : printf("Can't see your oftions anyway?");
	}
	
	getch();
}
