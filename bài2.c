#include <stdio.h>

// Hàm s?p x?p m?ng b?ng thu?t toán bubble sort
void bubbleSort(int arr[], int n) {
    int i, j, temp;

    // Duy?t m?ng n-1 l?n
    for (i = 0; i < n - 1; i++) {
        // Duy?t qua các ph?n t? chýa ðý?c s?p x?p
        for (j = 0; j < n - 1 - i; j++) {
            // So sánh và hoán ð?i n?u arr[j] > arr[j+1]
            if (arr[j] > arr[j + 1]) {
                // Hoán ð?i các ph?n t?
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Hàm in m?ng ra màn h?nh
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    // Kh?i t?o m?ng s? nguyên b?t k?
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]);

    // In m?ng trý?c khi s?p x?p
    printf("M?ng ban ð?u: \n");
    printArray(arr, n);

    // S?p x?p m?ng b?ng bubble sort
    bubbleSort(arr, n);

    // In m?ng sau khi s?p x?p
    printf("M?ng sau khi s?p x?p theo th? t? tãng d?n: \n");
    printArray(arr, n);

    return 0;
}

