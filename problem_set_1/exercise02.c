#include<stdio.h>

int main() {
    int choice;
    float temperature, converted;
    
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);
    
    printf("Enter temperature: ");
    scanf("%f", &temperature);
    
    switch (choice) {
        case 1:
            converted = (temperature * 9.0 / 5.0) + 32.0;
            printf("%.2f°C = %.2f°F\n", temperature, converted);
            break;
            
        case 2:
            converted = (temperature - 32.0) * 5.0 / 9.0;
            printf("%.2f°F = %.2f°C\n", temperature, converted);
            break;
            
        default:
            printf("Error: Invalid choice! Please enter 1 or 2.\n");
            return 1;
    }
    
    return 0;
}