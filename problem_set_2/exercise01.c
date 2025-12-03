#include <stdio.h>
#include <stdbool.h>

int main() {
    int num, count = 0;
    float sum = 0.00;
    int positive_count = 0, negative_count = 0;
    int max, min;
    bool first_input = true;
    bool flag = true;
    float average;

    while (flag) {
        printf("Enter Your Sequence: \n");
        scanf("%d", &num);
        
        if (num == 0) {
            flag = false;
        } else {
            if (first_input) {
                max = num;
                min = num;
                first_input = false;
            }
            
            count++;
            sum += num;
            
            if (num > max) 
                max = num;
            
            if (num < min) 
                min = num;
            
            if (num > 0) {
                positive_count++;
            }else if (num < 0) {
                negative_count++;
            }
        }
    }
    
    if (count == 0) {
        printf("No data\n");
    } else {        
        
        average = sum / count;
        
        printf("Count: %d\n", count);
        printf("Sum: %f\n", sum);
        printf("Average: %.2f\n", average);
        printf("Maximum: %d\n", max);
        printf("Minimum: %d\n", min);
        printf("Positive numbers: %d\n", positive_count);
        printf("Negative numbers: %d\n", negative_count);
    }
    
    return 0;
}
