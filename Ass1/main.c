#include <stdio.h>

int findMax(int arr[], int n) {
    int max = arr[0]; 
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int array[6] = {7, 6, 3, 34, 10, 710};
    int n = 6;
    printf("Su dung vong lap for:\n");
    for (int i = 0; i < n; i++) {
        printf("Phan tu %d cua mang la %d\n", i + 1, array[i]);
    }


    printf("\nSu dung vong lap while:\n");
    int j = 0;
    while (j < n) {
        printf("Phan tu %d cua mang la %d\n", j + 1, array[j]);
        j++;
    }


    printf("\nSu dung vong lap do-while:\n");
    int k = 0;
    do {
        printf("Phan tu %d cua mang la %d\n", k + 1, array[k]);
        k++;
    } while (k < n);


    int result = findMax(array, n);
    printf("\nPhan tu lon nhat trong mang la: %d\n", result);

    return 0;
}
