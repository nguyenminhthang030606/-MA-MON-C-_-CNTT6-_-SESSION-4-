#include <stdio.h>

int main() {
    int number;
    printf("Nhap so nguyen: ");
    scanf("%d", &number);
    if (number %3==0) {
        printf ("so nay chia het cho 3\n");
    }else {
        printf ("so nay khong chia het cho 3\n");
    }
    if (number %5==0) {
        printf ("so nay chia het cho 5\n");
    }else {
        printf ("so nay khong chia het cho 5\n");
    }
    if (number %3==0,number%5==0) {
        printf ("so nay chia het cho ca 3 va 5\n");
    }else {
        printf ("so nay khong  chia het cho ca 3 va 5\n");
    }
    return 0;
}