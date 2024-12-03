#include <stdio.h>

// H�m s?p x?p m?ng b?ng thu?t to�n bubble sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;

    // Duy?t m?ng n-1 l?n
    for (i = 0; i < n - 1; i++) {
        // Duy?t qua c�c ph?n t? ch�a ��?c s?p x?p
        for (j = 0; j < n - 1 - i; j++) {
            // So s�nh v� ho�n �?i n?u arr[j] > arr[j+1]
            if (arr[j] > arr[j + 1]) {
                // Ho�n �?i c�c ph?n t?
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// H�m in m?ng ra m�n h?nh
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // Kh?i t?o m?ng s? nguy�n b?t k?
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    // In m?ng tr�?c khi s?p x?p
    printf("M?ng ban �?u: \n");
    printArray(arr, n);

    // S?p x?p m?ng b?ng bubble sort
    bubbleSort(arr, n);

    // In m?ng sau khi s?p x?p
    printf("M?ng sau khi s?p x?p theo th? t? t�ng d?n: \n");
    printArray(arr, n);

    return 0;
}

