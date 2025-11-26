#include<stdio.h>

// Exercise 01:
int main() {
    int x, y, z;

    printf("Enter x: ");
    scanf("%d", &x);
    printf("Enter y: ");
    scanf("%d", &y);
    printf("Enter z: ");
    scanf("%d", &z);

    if (x >= y && x >= z) {
        printf("X: %d \n", x);
        if (y >= z) {
            printf("Y: %d \n", y);
            printf("Z: %d \n", z);
        }else {
            printf("Z: %d \n", z); 
            printf("Y: %d \n", y);
        }          
    } else if (y >= x && y >= z) {
        printf("Y: %d \n", y);
        if (x >= z) {
            printf("X: %d \n", x);
            printf("Z: %d \n", z);
        }else {
            printf("Z: %d \n", z); 
            printf("X: %d \n", x);
        }  
    } else {
        printf("Z: %d \n", z);
        if (y >= x) {
            printf("Y: %d \n", y);
            printf("X: %d \n", x);
        }else {
            printf("X: %d \n", x); 
            printf("Y: %d \n", y);
        }  
    }
   /* Qst: 02
   char operator;
   float num1, num2;
    
    printf("Enter operation (+, -, *, /): ");
    scanf("%c", &operator);
    
    printf("Enter first number: ");
    scanf("%f", &num1);
    printf("Enter second number: ");
    scanf("%f", &num2);
    
    // Perform calculation based on operator
    switch (operator) {
        case '+':
            printf("Result: %.2f + %.2f = %.2f\n", num1, num2, (num1 + num2));
            break;
            
        case '-':
            printf("Result: %.2f - %.2lf = %.2f\n", num1, num2, (num1 - num2));
            break;
            
        case '*':
            printf("Result: %.2f * %.2lf = %.2f\n", num1, num2, (num1 * num2));
            break;
            
        case '/':
            // Check for division by zero
            if (num2 == 0) {
                printf("Error: Division by zero is not allowed!\n");
            } else {
                printf("Result: %.2f / %.2f = %.2f\n", num1, num2, (num1 / num2));
            }
            break;
            
        default:
            printf("Error: Invalid operator '%c'! Please use +, -, *, or /\n", operator);
            break;
    }
    
   */
    return 0;
}

