#include <stdio.h>

int main() {
    int num, reversed = 0, sum = 0, count = 0, digit;
    
    do{
        printf("Enter a positive integer: ");
        scanf("%d", &num);
    } while(num < 0);
    
    int before = num;
    
    while (num) {
        digit = num % 10;
        
        reversed = reversed * 10 + digit;
        
        sum += digit;
        
        count++;
        
        num /= 10;
    }
    
    printf("Original: %d\n", before);
    printf("Reversed: %d\n", reversed);
    printf("Sum: %d\n", sum);
    printf("Number: %d\n", count);
    
    return 0;
}