#include <stdio.h>
void printNumbers() {
    int numbers[6] = {7, 6, 3, 34, 10, 710};
    for (int i = 0; i < 6; i++) {
        printf("The element %d of the array is = %d \r\n", i+1, numbers[i]);
    }
}

void printNumbers2() {
    int numbers[6] = {7, 6, 3, 34, 10, 710};
    int i = 0;
    while (i < 6) {
        printf("The element %d of the array is = %d \r\n", i+1, numbers[i]);
        i++;
    }
}

void printNumbers3() {
    int numbers[6] = {7, 6, 3, 34, 10, 710};
    int i = 0;
    do {
        printf("The element %d of the array is = %d \r\n", i+1, numbers[i]);
        i++;
    }
    while (i < 6);
}

void findMax() {
    int numbers[6] = {7, 6, 3, 34, 10, 710};
    int max = numbers[5];
    for (int j = 0; j < 6; j++) {
        if (max < numbers[j]) {
            max = numbers[j];
        }
    }
    printf("So lon nhat la: %d \r\n", max);
}

int main () {
    printNumbers();
    printNumbers2();
    printNumbers3();
    findMax();
    return 0;
}