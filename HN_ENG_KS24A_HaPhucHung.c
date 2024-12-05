#include <stdio.h>
int main(){
    int arr[100]; 
    int n = 0;    
    int choice;
    int sum = 0;

    while (1){
        printf("\n--- MENU ---\n");
        printf("1. Nhap mang\n");
        printf("2. In mang\n");
        printf("3. Tim gia tri nho nhat va lon nhat\n");
        printf("4. Tinh tong cac phan tu\n");
        printf("5. Them mot phan tu vao cuoi mang\n");
        printf("6. Xoa mot phan tu tai vi tri cu the\n");
        printf("7. Sap xep mang giam dan\n");
        printf("8. Sap xep mang tang dan\n");
        printf("9.in so nguyen to trong mang\n");
        printf("10. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: 
                printf("Nhap so phan tu: ");
                scanf("%d", &n);
                for (int i = 0; i < n; i++) {
                    printf("Nhap phan tu arr[%d]: ", i);
                    scanf("%d", &arr[i]);
                }
                break;
            case 2: 
                printf("Cac phan tu trong mang:\n");
                for (int i = 0; i < n; i++) {
                    printf("arr[%d] = %d\n", i, arr[i]);
                }
                break;
            case 3:  
                if (n == 0) {
                    printf("Mang rong!\n");
                    break;
                }
                int min = arr[0], max = arr[0];
                for (int i = 1; i < n; i++) {
                    if (arr[i] < min) min = arr[i];
                    if (arr[i] > max) max = arr[i];
                }
                printf("Gia tri nho nhat: %d\n", min);
                printf("Gia tri lon nhat: %d\n", max);
                break;

            case 4: 

                for (int i = 0; i < n; i++) {
                    sum += arr[i];
                }
                printf("Tong cac phan tu: %d\n", sum);
                break;
            case 5: 
                if (n >= 100) {
                    printf("Mang da day, khong the them phan tu moi.\n");
                    break;

                int value;
                printf("Nhap phan tu muon them: ");
                scanf("%d", &value);
                arr[n] = value;
                n++;
                break;
            case 6: 
                break;
            case 7: 
                break;
            case 8:
                break;
            case 9:
            	break;
            case 10: 
                printf("Thoat chuong trinh.\n");
                return 0;

            default:
                printf("Lua chon khong hop le, vui long thu lai!\n");
            }
        }
    }

    return 0;
}
