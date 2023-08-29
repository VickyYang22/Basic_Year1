#include <stdio.h>
#include<stdlib.h>



int main() {
    char employee_type;
    float basic_salary, preferential_rate, wage;
    
system("color a");

    
    printf("Enter the employee type (D for daily, M for monthly, T for temporary): ");
    scanf("%c", &employee_type);
    
    switch (employee_type) {
        case 'D':
            basic_salary = 4000;
            preferential_rate = 0.2;
            wage = basic_salary + (basic_salary * preferential_rate);
            printf("Wage for the daily worker: %.2f\n", wage);
            break;
            
        case 'M':
            basic_salary = 8000;
            preferential_rate = 0.5;
            wage = basic_salary + (basic_salary * preferential_rate);
            printf("Wage for the monthly employee: %.2f\n", wage);
            break;
            
        case 'T':
            basic_salary = 6000;
            preferential_rate = 0.2;
            wage = basic_salary + (basic_salary * preferential_rate);
            printf("Wage for the temporary employee: %.2f\n", wage);
            break;
            
        default:
            printf("Invalid employee type.\n");
            break;
    }
    
    return 0;
}

