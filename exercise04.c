#include <stdio.h>

int main() {
    int total = 0;
    
    printf("Enter scores for 5 lectures (0-20):\n");
    
    for (int i = 0; i < 5; i++) {
        float tmp = -1;
        do {
            printf("Enter %d lecture note:", (i + 1));
            scanf("%f", &tmp);
        } while(tmp < 0 || tmp > 20);

        total += tmp;
    }

    if (total < 60) 
        printf("F and total is: %f \n", total);
    else if (total < 70)
        printf("D and total is: %f \n", total);
    else if (total < 80) 
        printf("C and total is: %f \n", total);
    else if (total < 90) 
        printf("B and total is: %f \n", total);
    else 
        printf("A and total is: %f \n", total);
    

    return 0;
}