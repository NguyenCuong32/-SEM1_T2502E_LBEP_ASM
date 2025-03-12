#include <stdio.h>
int timMax(int arr[], int size) {
    int max = arr[0];  
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];  
        }
    }
    return max;
}
int main() {
    int array[] = {11, 34, 9, 23, 5, 711};
    int size = sizeof(array) / sizeof(array[0]);
    int max = timMax(array, size);
    printf("Phan tu lon nhat trong mang la: %d\n", max);
    return 0;
}