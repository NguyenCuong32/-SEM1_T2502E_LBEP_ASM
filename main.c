#include <stdio.h>

// Hàm tính y(x) cho bài 1
float calculateY(float x) {
    float g = 9.8;
    return (-0.5 * g * x * x + x);
}

// Hàm tìm số lớn nhất trong mảng cho bài 2.2
int findLargest(int arr[], int size) {
    int max = arr[0];
    for(int i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    // Bài 1: Tính đường đạn
    printf("\n=== BAI 1: DUONG DAN ===\n");
    float x;
    
    // Tính y(x) với x = 5
    float result = calculateY(5);
    printf("The position of bullet: y(5) = %.2f\n", result);
    
    // Nhập x từ bàn phím
    printf("Enter x value: ");
    scanf("%f", &x);
    
    // Tính y(x) và kiểm tra điều kiện
    float y = calculateY(x);
    
    // Điều kiện đã được sửa: x >= 30 và y <= 50 để trúng đích
    if (x >= 30 && y <= 50) {
        printf("The bullet got a goal\n");
    } else {
        printf("The bullet got out\n");
    }

    // Bài 2.1: Hiển thị mảng
    printf("\n=== BAI 2.1: HIEN THI MANG ===\n");
    int Array[6] = {7, 6, 3, 34, 10, 710};
    
    // a) Sử dụng vòng lặp for
    printf("\nUsing for loop:\n");
    for(int i = 0; i < 6; i++) {
        printf("The element %d of the array is %d\n", i+1, Array[i]);
    }
    
    // b) Sử dụng vòng lặp while
    printf("\nUsing while loop:\n");
    int j = 0;
    while(j < 6) {
        printf("The element %d of the array is %d\n", j+1, Array[j]);
        j++;
    }
    
    // c) Sử dụng vòng lặp do-while
    printf("\nUsing do-while loop:\n");
    int k = 0;
    do {
        printf("The element %d of the array is %d\n", k+1, Array[k]);
        k++;
    } while(k < 6);
    
    // Bài 2.2: Tìm số lớn nhất
    printf("\n=== BAI 2.2: TIM SO LON NHAT ===\n");
    int largest = findLargest(Array, 6);
    printf("The largest element in the array is: %d\n", largest);
    
    return 0;
}
