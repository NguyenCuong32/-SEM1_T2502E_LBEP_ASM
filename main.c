#include <stdio.h>

void bai21() {
    int array[6] = {7, 6, 3, 34, 10, 710};

    for(int i = 0; i < 6; i++) {
        printf("The element %d of the array is %d \n", i + 1, array[i]);
    }

    printf("\n");

    int i = 0;
    while (i < 6) {
        printf("The element %d of the array is %d \n", i + 1, array[i]);
        i++;
    }

    printf("\n");

    i = 0;
    do
    {
        printf("The element %d of the array is %d \n", i + 1, array[i]);
        i++;
    } while (i < 6);
    
}

void bai22() {
    int n;
    printf("Enter number of element: \n");
    scanf("%d", &n);
    int num[n];
    printf("Enter number: \n");
    for(int i = 0; i < n; i++) {
        scanf("%d", &num[i]);
    }
    int largest = num[0];
    for(int i = 0; i < n; i++) {
        if(num[i] > largest) {
            largest = num[i];
        }
    }
    printf("The largest is: %d", largest);
}

// Write a function to calculate y(x)
float cal_y(float x, float g) {
    return -0.5 * g * x * x + x;
}

void bai1() {
    
// Calculating y(x) with x = 5 and displaying the result on the screen : “The position of
//bullet: y(5)”.
    float x, y, g = 9.8;
    x = 5;
    y = cal_y(x, g);
    printf("The position of bullet: y(5) = %.2f \n", y);

    printf("Enter x: \n");
    scanf("%f", &x);

    if(y > 50 || y < 30) {
        printf("The bullet got out \n");
    } else {
        printf("The bullet got a goal \n");
    }
}


int main() {
    bai1();
    printf("\n");
    bai21();
    printf("\n");
    bai22();
    

    return 0;
}