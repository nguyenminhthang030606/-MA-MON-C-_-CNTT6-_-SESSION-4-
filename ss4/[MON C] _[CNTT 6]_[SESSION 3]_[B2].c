#include <stdio.h>

int main() {
    int number;
    printf("Nhap so nguyen: ");
    scanf("%d", &number);
    if (number %2==0) {
        printf("so nay la so chan ");
    }else {
        printf (" so nay la so le");
    }
    return 0;
}