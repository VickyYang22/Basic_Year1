#include <stdio.h>
#include <stdlib.h>

int score, answer;

void exam() {
    printf("\t######################################\n");
    printf("\t#                                    #\n");
    printf("\t# Welcome to the C Programming Exam! #\n");
    printf("\t#                                    #\n");
    printf("\t######################################\n\n");

    // Question 1
    	printf("I. Which of the following is the correct naming?\n");
    printf("\t1) User name\n");
    printf("\t2) _testValue\n");
    printf("\t3) for\n");
    printf("\t4) 2data\n\n");
    printf("# Chose Number :  ");
    // Correct answer: 2
    scanf("%d", &answer);
    if (answer == 2) {
        score++;
    }
    printf("\n");

    // Question 2
    	printf("II. Which of the following isn't the correct naming?\n");
    printf("\t1) _app\n");
    printf("\t2) B2\n");
    printf("\t3) a\n");
    printf("\t4) $money\n\n");
    printf("# Chose Number : ");
    // Correct answer: d
    scanf("%d", &answer);
    if (answer == 4 ){
        score++;
    }
    printf("\n");

    // Question 3
    	printf("III. Which of the following is the correct naming of Char?\n");
    printf("\t1) char data ='a';\n");
    printf("\t2) char data = a ;\n");
    printf("\t3) char data[2]='a';\n");
    printf("\t4) It's all wrong.\n\n");
    printf("# Chose Number : ");
    // Correct answer: 1
    scanf("%d", &answer);
    if (answer == 1) {
        score++;
    }
    printf("\n");
    
    // Question 4
    	printf("IV. Which one is correct from 8+7*6 = ?\n");
    printf("\t1) 40\n");
    printf("\t2) 90\n");
    printf("\t3) 42\n");
    printf("\t4) 92\n\n");
    printf("# Chose Number : ");
    // Correct answer: 3
    scanf("%d", &answer);
    if (answer == 3) {
        score++;
    }
    printf("\n");
    
    // Question 5
    	printf("V. Which one is correct from 10/2%%3 = ?\n");
    printf("\t1) 2\n");
    printf("\t2) 1.6\n");
    printf("\t3) 1.5\n");
    printf("\t4) 3\n\n"); 
	printf("# Chose Number : ");   
    // Correct answer: 1
    scanf("%d", &answer);
    if (answer == 1) {
        score++;
    }
    printf("\n");

    // Question 6
        printf("VI. Which one is correct 10 != 10 ?\n");
    printf("\t1) False(1)\n");
    printf("\t2) False(0)\n");
    printf("\t3) True(1)\n");
    printf("\t4) True(0)\n\n");
    printf("# Chose Number : ");
    // Correct answer: 2
    scanf("%d", &answer);
    if (answer == 2) {
        score++;
    }
    printf("\n");

    // Question 7
        printf("VII. Which one is correct 200 >= 200 ?\n");
    printf("\t1) False(1)\n");
    printf("\t2) False(0)\n");
    printf("\t3) True(1)\n");
    printf("\t4) True(0)\n\n");
    printf("# Chose Number : ");
    // Correct answer: 3
    scanf("%d", &answer);
    if (answer == 3) {
        score++;
    }
    printf("\n");

    // Question 8
        printf("VIII. Which one is correct for using scanf() ?\n");
    printf("\t1) scanf(\"%%d %%d\",&a,&b); \n");
    printf("\t2) scanf(\"%%d %%d\",a,b);\n");
    printf("\t3) scanf('%%d %%d',&a,&b);\n");
    printf("\t4) scanf('%%d %%d',a,b);\n\n");
    printf("# Chose Number : ");
    // Correct answer: 1
    scanf("%d", &answer);
    if (answer == 1) {
        score++;
    }
    printf("\n");

    // Question 9
    	printf("IX. What is the output of the following code?\n");
    printf("   int x = 200;\n");
    printf("   printf(\"%%d\", x+10);\n");
    printf("\t1) Compiler Error\n");
    printf("\t2) 200\n");
    printf("\t3) 201\n");
    printf("\t4) 210\n\n");
    printf("# Chose Number : ");
    // Correct answer: 4
    scanf("%d", &answer);
    if (answer == 4) {
        score++;
    }
    printf("\n");

    // Question 10
    printf("X. What is the output of the following code?\n");
    printf("   int x = 5;\n");
    printf("   printf(\"%%d\", ++x);\n");
    printf("\t1) 5\n");
    printf("\t2) 6\n");
    printf("\t3) 7\n");
    printf("\t4) Compiler Error\n");
    printf("# Chose Number : ");
    // Correct answer: 2
    scanf("%d", &answer);
    if (answer == 2) {
        score++;
    }
    printf("\n");
    printf("\n");

    // Result
    printf("\t #######################\n");
    printf("\t #                     #\n");
    printf("\t # Your score is: %d/10 #\n", score);
    printf("\t #                     #\n");
    printf("\t #######################\n\n");
}

int main() {
    // ...
    // (Your existing main function)
    int ID, allscore = 0, attempts = 0;
    char again;

    do {
        // ...
        // (Your existing student ID input and exam call)
        attempts++;
        printf("Enter Your Student Number (1-7) = ");
        scanf("%d", &ID);
        printf("\n\n");
        switch (ID) {
            case 1:
                printf("\t\t    1.Lex Phansana\n\n");
                exam(&score);
                break;
            case 2:
                printf("\t\t    2.Vicky Yang\n\n");
                exam(&score);
                break;
            case 3:
                printf("\t\t    3.Nui Susakhone\n\n");
                exam(&score);
                break;
            case 4:
                printf("\t\t    4.Vanh Pheng\n\n");
                exam(&score);
                break;
            case 5:
                printf("\t\t    5.Messi Socool\n\n");
                exam(&score);
                break;
            case 6:
                printf("\t\t    6.Way Rooney\n\n");
                exam(&score);
                break;
            case 7:
                printf("\t\t    7.Uncle Tou\n\n");
                exam(&score);
                break;
            default:
                printf("\t\tcan't see your name\n\n");
                break;
        }

        printf("Do you want to do the exam again? (Y/N): ");
        scanf(" %c", &again);

    } while (again == 'Y' || again == 'y');

    printf("\n");
    printf("\n");

    if (attempts > 0) {
        // Calculate and display average score
        float averageScore = (float)score / attempts;
        printf("\t**************************\n");
        printf("\t* Average score: %.2f/10 *\n", averageScore);
        printf("\t**************************");
    }

    return 0;
}

