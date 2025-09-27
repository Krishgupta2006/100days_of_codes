#include <stdio.h>

int main() {
    int arr[100]; 
    int n, i;
    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter %d elements in the array:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (i = 0; i < n; i++) {
        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    printf("Number of positive elements: %d\n", positiveCount);
    printf("Number of negative elements: %d\n", negativeCount);
    printf("Number of zero elements: %d\n", zeroCount);

    return 0;
}