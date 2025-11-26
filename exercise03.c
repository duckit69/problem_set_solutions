#include <stdio.h>

int main() {
    int num, i, sum = 0;
    
    printf("Enter an integer: ");
    scanf("%d", &num);
    
    if (num % 2 == 0) {
        printf("%d is an EVEN number.\n", num);
    } else {
        printf("%d is an ODD number.\n", num);
    }
        
    for (i = 1; i <= num; i++) 
        sum += i;  // Add current number to sum
    
    
    printf("The sum of all numbers from 1 to %d is: %d\n", num, sum);
    
    return 0;
}