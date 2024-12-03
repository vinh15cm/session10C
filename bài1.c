#include <stdio.h>

int main() {
    int arr[] = {5, 12, 7, 3, 9, 15, 22, 8};  // Kh?i t?o m?ng
    int n = sizeof(arr) / sizeof(arr[0]);    // Kích thý?c m?ng
    int key, i, found = 0;                   // Bi?n ð? lýu giá tr? nh?p t? ngý?i dùng

    // Yêu c?u ngý?i dùng nh?p ph?n t? c?n t?m
    printf("Nhap phan tu can tim: ");
    scanf("%d", &key);

    // Ki?m tra ph?n t? có trong m?ng không
    for (i = 0; i < n; i++) {
        if (arr[i] == key) {
            printf("Phan tu %d duoc tim thay tai vi tri %d.\n", key, i);
            found = 1; // Ðánh d?u ð? t?m th?y ph?n t?
            break;     // D?ng v?ng l?p n?u t?m th?y
        }
    }

    // N?u không t?m th?y ph?n t?
    if (!found) {
        printf("Phan tu %d khong ton tai trong mang.\n", key);
    }

    return 0;
}

