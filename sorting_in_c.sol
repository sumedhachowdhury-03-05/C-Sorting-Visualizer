#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

void visualize(int arr[], int n) {
    system("cls");  // clears console on Windows
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < arr[i]; j++)
            printf("#");
        printf(" (%d)\n", arr[i]);
    }
    Sleep(200);  // small delay
}

void bubbleSort(int arr[], int n) {
    int temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                visualize(arr, n);
            }
        }
    }
}

int main() {
    int arr[] = {5, 1, 4, 2, 8, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    printf("Bubble Sort Visualization (Dev-C++)\n");
    printf("Array before sorting:\n");
    printArray(arr, n);

    printf("\nSorting...\n");
    Sleep(1000);

    bubbleSort(arr, n);

    printf("\nArray after sorting:\n");
    printArray(arr, n);

    printf("\nDone!\n");
    return 0;
}
