#include<stdio.h>
main(){
	char grade;
	printf("Enter Your Grade = ");
	scanf("%c",&grade);
	switch(grade)
{
case 'a':
case 'A': printf("Excellent");
		    break;
case 'b':
case 'B': printf("Good");
		    break;
case 'C':
case 'c' : printf("OK");
		    break;
case 'D':
case 'd' : printf("Improved");
		    break;
case 'F':
case 'f' : printf("you much do better than this");
		    break;
default :  printf("what is your grade anyway ?");
}
getch();
}
