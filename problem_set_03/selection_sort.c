#include <stdio.h>

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int n = 5;


    for (int i = 0; i < n - 1; i++) {
        int min_idx = i;
        // Iterate through the unsorted portion to find the actual minimum
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                // Update min_idx if a smaller element is found
                min_idx = j;
            }
        }
        
        // swap values
        int temp = arr[i];
        arr[i] = arr[min_idx];
        arr[min_idx] = temp;
    }



    printf("-------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n-------------------------------------------------\n");
    
    return 0;
}