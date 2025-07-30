#include <stdio.h>

int main() {
    int number;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &number);
    if (number > 0) {
        printf("Day la mot so duong.\n");
    } else if (number < 0) {
        printf("Day la mot so am.\n");
    }
    return 0;
}