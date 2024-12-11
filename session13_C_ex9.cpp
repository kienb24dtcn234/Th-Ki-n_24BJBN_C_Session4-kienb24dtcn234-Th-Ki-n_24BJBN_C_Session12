#include <stdio.h>
#include <math.h>

int isPrime(int n) {
    if (n < 2) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

void nhapMang(int n, int m, int arr[][100]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("Nhap gia tri cho phan tu [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

void inMang(int n, int m, int arr[][100]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

void inGoc(int n, int m, int arr[][100]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if ((i == 0 && j == 0) || (i == 0 && j == m-1) || (i == n-1 && j == 0) || (i == n-1 && j == m-1)) {
                printf("%d ", arr[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

void inBien(int n, int m, int arr[][100]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == 0 || i == n-1 || j == 0 || j == m-1) {
                printf("%d ", arr[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

void inDuongCheo(int n, int m, int arr[][100]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i == j || i + j == n - 1) {
                printf("%d ", arr[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

void inSoNguyenTo(int n, int m, int arr[][100]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (isPrime(arr[i][j]) == 1) {
                printf("%d ", arr[i][j]);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }
}

int main() {
    int n, m;
    int arr[100][100];
    int choice;

    printf("Nhap so hang (n): ");
    scanf("%d", &n);
    printf("Nhap so cot (m): ");
    scanf("%d", &m);

    do {
        printf("\nMENU\n");
        printf("1. Nhap gia tri cac phan tu cua mang\n");
        printf("2. In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3. In ra cac phan tu o goc theo ma tran\n");
        printf("4. In ra cac phan tu nam tren duong bien theo ma tran\n");
        printf("5. In ra cac phan tu nam tren duong cheo chinh va cheo phu theo ma tran\n");
        printf("6. In ra cac phan tu la so nguyen to theo ma tran\n");
        printf("7. Thoat\n");
        printf("Chon chuc nang (1-7): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                nhapMang(n, m, arr);
                break;
            case 2:
                inMang(n, m, arr);
                break;
            case 3:
                inGoc(n, m, arr);
                break;
            case 4:
                inBien(n, m, arr);
                break;
            case 5:
                inDuongCheo(n, m, arr);
                break;
            case 6:
                inSoNguyenTo(n, m, arr);
                break;
            case 7:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le! Vui long chon tu 1 den 7.\n");
        }
    } while (choice != 7);

    return 0;
}

