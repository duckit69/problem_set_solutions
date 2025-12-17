// Optimized implementation of Bubble sort
#include <stdbool.h>
#include <stdio.h>

int main(){
    int arr[] = { 64, 34, 25, 12, 22, 11, 90 };
    int n = 7;
    int i, j;


    bool swapped;
    for (i = 0; i < n - 1 && (i == 0 || swapped); i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = true;
            }
        }
    }


    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
        printf("\n-----------------------\n");
    return 0;
}