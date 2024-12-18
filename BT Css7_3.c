#include <stdio.h>

int main() {
    // Khai báo và gán giá trị cho mảng số nguyên có 5 phần tử
    int array[5] = {1, 3, 4, 7, 9};

    // Biến để kiểm tra nếu có số chẵn được in ra
    int found = 0;

    printf("Cac phan tu la so chan:\n");
    for (int i = 0; i < 5; i++) {
        if (array[i] % 2 == 0) {
            printf("%d ", array[i]);
            found = 1;
        }
    }


    if (found != 1) {
        printf("ko co so chan.\n");
    }

    return 0;
}