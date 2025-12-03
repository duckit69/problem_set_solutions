#include <stdio.h>

int main() {
    int n;
    int steps = 0;
    int maxVal;
    
    // Read input
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    
    // Store the maximum value (starting with n)
    maxVal = n;
    
    // Print the starting number
    printf("%d ", n);
    
    // Process Collatz sequence
    while (n != 1) {
        if (n % 2 == 0) {
            // Even: divide by 2
            n = n / 2;
        } else {
            // Odd: multiply by 3 and add 1
            n = 3 * n + 1;
        }
        
        // Print current value
        printf("%d ", n);
        
        // Update maximum if necessary
        if (n > maxVal)
            maxVal = n;
        
        
        // Increment step counter
        steps++;
    }
    
    // Print newline after sequence
    printf("\n");
    
    // Print results
    printf("Steps = %d\n", steps);
    printf("Max value = %d\n", maxVal);
    
    return 0;
}
