#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void visualize(int arr[], int n) {
    system("cls");   // clear the console
    printf("Sorting Visualization:\n\n");

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < arr[i]; j++)
            printf("#");
        printf(" (%d)\n", arr[i]);
    }

    Sleep(250);      // delay for animation
}

void bubbleSort(int arr[], int n) {
    int temp;

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                visualize(arr, n);  // update after every swap
            }
        }
    }
}
