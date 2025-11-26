#include <stdio.h>

int main() {
    int num, original, sum = 0, count = 0;
    
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    
    if (num <= 0) {
        return 1;
    }
    
    original = num;
    
    // Count digits
    int temp = num;
    while (temp) {
        count++;
        temp /= 10;
    }
    
    //  sum of digits^count
    temp = num;
    while (temp) {
        int digit = temp % 10;
        int power = 1;
        
        // power calculation
        for (int i = 0; i < count; i++) 
            power *= digit;
        
        sum += power;
        temp /= 10;
    }
    
    // Display result
    printf("\nNumber: %d\n", original);
    printf("Digits: %d\n", count);
    printf("Sum of digits to the power of %d: %d\n", count, sum);
    
    if (sum == original) {
        printf("ARMSTRONG NUMBER\n");
    } else {
        printf("NOT an Armstrong number\n");
    }
    
    return 0;
}