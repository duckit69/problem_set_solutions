#include <stdio.h>

int main() {
    int n, i, j;
    
    printf("Enter n (1-9): ");
    scanf("%d", &n);
    
    // Validate input
    if (n > 1 && n < 9) {
        // Loop through each row
        for (i = 1; i <= n; i++) {
            // First row or last row: print all numbers
            if (i == 1) {
                printf("1\n");
            }
            else if (i == n) {
                // Last row: print all numbers from 1 to n
                for (j = 1; j <= n; j++) {
                    printf("%d", j);
                    if (j < n) {
                        printf(" ");
                    }
                }
                printf("\n");
            }
            else {
                // Middle rows: print 1, spaces for middle, then i
                printf("1 ");
                // Print spaces for positions 2 to i-1
                for (j = 2; j < i; j++) {
                    printf(" ");
                }
                printf("%d\n", i);
            }
        }
    
    } else {
        printf("n must be between 1 and 9\n");
    }
    return 0;
}
