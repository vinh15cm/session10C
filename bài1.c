#include <stdio.h>

int main() {
    int arr[] = {5, 12, 7, 3, 9, 15, 22, 8};  // Kh?i t?o m?ng
    int n = sizeof(arr) / sizeof(arr[0]);    // K�ch th�?c m?ng
    int key, i, found = 0;                   // Bi?n �? l�u gi� tr? nh?p t? ng�?i d�ng

    // Y�u c?u ng�?i d�ng nh?p ph?n t? c?n t?m
    printf("Nhap phan tu can tim: ");
    scanf("%d", &key);

    // Ki?m tra ph?n t? c� trong m?ng kh�ng
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Phan tu %d duoc tim thay tai vi tri %d.\n", key, i);
            found = 1; // ��nh d?u �? t?m th?y ph?n t?
            break;     // D?ng v?ng l?p n?u t?m th?y
        }
    }

    // N?u kh�ng t?m th?y ph?n t?
    if (!found) {
        printf("Phan tu %d khong ton tai trong mang.\n", key);
    }

    return 0;
}

