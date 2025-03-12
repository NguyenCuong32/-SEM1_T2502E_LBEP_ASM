#include <stdio.h>

void function() {
    int x = 5;
    float g = 9.8;
    float y = -(1.0/2.0)*g*x*x + x;
    printf("Function: %.2f\r\n", y);
}

void enterNumber() {
    float x;
    float g = 9.8;
    float y;
    printf("Enter x: \r\n");
    scanf("%f", &x);
    y = -(1.0/2.0)*g*x*x + x;
    if (y > 50 || y < 30) {
        printf("The bullet got out \r\n");
    } else if (y <= 50 && y >= 30) {
        printf("The bullet got a goal \r\n");
    }
}

int main() {
    function();
    enterNumber();
    return 0;
}