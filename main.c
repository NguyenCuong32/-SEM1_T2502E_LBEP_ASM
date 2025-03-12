#include <stdio.h>

int main() {
    
    int arr[] = {7, 6, 3, 34, 10, 710};
    int n = sizeof(arr) / sizeof(arr[0]);  

    
    printf("Sử dụng vòng lặp for:\n");
    for (int i = 0; i < n; i++) {
        printf("The element %d of the array is %d\n", i + 1, arr[i]);
    }


    printf("\nSử dụng vòng lặp while:\n");
    int i = 0;
    while (i < n) {
        printf("The element %d of the array is %d\n", i + 1, arr[i]);
        i++;
    }

    printf("\nSử dụng vòng lặp do-while:\n");
    i = 0;
    do {
        printf("The element %d of the array is %d\n", i + 1, arr[i]);
        i++;
    } while (i < n);

    return 0;
}
