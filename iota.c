#include <stdio.h>

float Area1() {
    float a, b, h, A;
    printf("enter value h = ");
    scanf("%f", &h);
    printf("enter value a = ");
    scanf("%f", &a);
    printf("enter value b = ");
    scanf("%f", &b);
    A = ((a + b) * h) / 2;
    printf("A=1/2*(%f+%f)*%f\n", a, b, h);
    printf("A=%.2f", A);
    printf("\n")
    return A; 
}


float Area2() {
    float b, h, A;
    printf("enter value b = ");
    scanf("%f", &b);
    printf("enter value h = ");
    scanf("%f", &h);
    A = 0.5 * b * h;
    printf("A=0.5*%f*%f\n", b, h);
    printf("A=%.2f\", A);
    return A;
}


float Area3() {
    float s, A;
    printf("enter value s = ");
    scanf("%f", &s);
    A = s^s;
    printf("A=%f*%f\n", s, s);
    printf("A=%.2f", A);
    return A; 
}

int main() {
    int choice;
    do {
    	printf("\n\n")
        printf("1. trapezoidal\n");
        printf("2. triangle\n");
        printf("3. square\n");
        printf("enter your choice = ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: Area1();
                break;
            case 2: Area2();
                break;
            case 3: Area3();
                break;
            default:
                printf("exiting program.\n");
        }
    } while (choice != 3); 
//    return 0;
}

