#include <stdio.h>

// Function to calculate the area of a trapezoid
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
    return A; // Return the calculated area
}

// Function to calculate the area of a triangle
float Area2() {
    float b, h, A;
    printf("enter value b = ");
    scanf("%f", &b);
    printf("enter value h = ");
    scanf("%f", &h);
    A = 0.5 * b * h;
    printf("A=0.5*%f*%f\n", b, h);
    printf("A=%.2f", A);
    return A; // Return the calculated area
}

// Function to calculate the area of a square
float Area3() {
    float s, A;
    printf("enter value s = ");
    scanf("%f", &s);
    A = s * s;
    printf("A=%f*%f\n", s, s);
    printf("A=%.2f", A);
    return A; // Return the calculated area
}

int main() {
    float choice;
    do {
        printf("1. trapezoidal\n");
        printf("2. triangle\n");
        printf("3. square\n");
        printf("enter your choice = ");
        scanf("%f", &choice);
        switch (choice) {
            case 1:
                Area1();
                break;
            case 2:
                Area2();
                break; // Missing break statement here
            case 3:
                Area3();
                break; // Missing break statement here
            default:
                printf("exiting program.\n");
        }
    } while (choice != 4); // Change the condition to exit the loop
    return 0;
}

