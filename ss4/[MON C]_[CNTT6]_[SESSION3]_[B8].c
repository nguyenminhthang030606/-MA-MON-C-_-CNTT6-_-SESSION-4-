#include <stdio.h>

int main() {
    float a, b, c;
    printf("Nhap 3 canh cua tam giac:\n");
    printf("Canh a: ");
    scanf("%f", &a);
    printf("Canh b: ");
    scanf("%f", &b);
    printf("Canh c: ");
    scanf("%f", &c);
    if (a > 0 && b > 0 && c > 0 &&
        a + b > c && a + c > b && b + c > a) {
        printf("La 3 canh tam giac.\n");
        } else {
            printf("Khong phai la 3 canh tam giac.\n");
        }

    return 0;
}