#include <stdio.h>

void bubbleSort(int arr[], int n);
void printArray(int arr[], int n);

int main() {
    int arr[] = {5, 1, 4, 2, 8, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array:\n");
    printArray(arr, n);

    bubbleSort(arr, n);

    printf("\nSorted Array:\n");
    printArray(arr, n);

    return 0;
}
