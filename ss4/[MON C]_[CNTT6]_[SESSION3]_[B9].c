#include <stdio.h>

int isLeapYear(int year) {
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0));
}

int isValidDate(int day, int month, int year) {
    if (year < 1 || month < 1 || month > 12 || day < 1) return 0;
    int daysInMonth;
    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            daysInMonth = 31; break;
        case 4: case 6: case 9: case 11:
            daysInMonth = 30; break;
        case 2:
            daysInMonth = isLeapYear(year) ? 29 : 28; break;
        default:
            return 0;
    }

    return (day <= daysInMonth);
}

int main() {
    int day, month, year;

    printf("Nhap ngay: ");
    scanf("%d", &day);
    printf("Nhap thang: ");
    scanf("%d", &month);
    printf("Nhap nam: ");
    scanf("%d", &year);

    if (isValidDate(day, month, year)) {
        printf("Ngay %02d/%02d/%d la ngay hop le.\n", day, month, year);
    } else {
        printf("Ngay %02d/%02d/%d KHONG phai la ngay hop le.\n", day, month, year);
    }

    return 0;
}