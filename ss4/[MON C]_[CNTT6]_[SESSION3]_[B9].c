#include <stdio.h>
int main() {
    int year, month, day;
    printf("Nhap ngay: ");
    scanf("%d", &day);
    printf("Nhap thang: ");
    scanf("%d", &month);
    printf("Nhap nam: ");
    scanf("%d", &year);

    if ((year<0) || (month<0||month>12)||(day<0||day>31)) {
        printf(" ko hop le");
        return 1;
    }

    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        printf("%d Day la nam nhuan",year);
    }else {
        printf("%d Day ko phai nam nhuan",year);
    }
    switch (month) {
            case 1:
            case 3:
            case 5:
            case 7:
            case 8:
            case 10:
            case 12:
            printf("%d co 31 ngay",month);
            break;
            case 4:
            case 6:
            case 9:
            case 11:
            printf("%d co 30 ngay",month);
            break;
            case 2:
            if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0) {
                printf("co 29 ngay");
            }else {
                printf("co 28 ngay");
            }break;
    }

    return 0;
}
