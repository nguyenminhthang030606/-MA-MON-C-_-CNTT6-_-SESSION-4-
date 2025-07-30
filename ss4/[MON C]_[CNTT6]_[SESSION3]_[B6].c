#include <stdio.h>

int main() {
    int previousIndex, currentIndex, consumption;
    long billAmount = 0;

    printf("nhap chi so cu : ");
    scanf("%d", &previousIndex);

    printf("nhap chi so moi : ");
    scanf("%d", &currentIndex);

    consumption = currentIndex - previousIndex;

    if (consumption < 0) {
        printf("Chi so moi phai lon hon hoac bang chi so cu!\n");
        return 1;
    }

    if (consumption <= 50) {
        billAmount = consumption * 10000;
    } else if (consumption <= 100) {
        billAmount = 50 * 10000 + (consumption - 50) * 15000;
    } else if (consumption <= 150) {
        billAmount = 50 * 10000 + 50 * 15000 + (consumption - 100) * 20000;
    } else if (consumption <= 200) {
        billAmount = 50 * 10000 + 50 * 15000 + 50 * 20000 + (consumption - 150) * 25000;
    } else {
        billAmount = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (consumption - 200) * 30000;
    }

    printf("So dien tieu thu: %d kWh\n",consumption);
    printf("Tien dien phai tra: %ld VND\n",billAmount);


    return 0;
}