#include <stdio.h>
//1.1
double tinh_y(double x) {
    double g = 9.8;
    return -0.5 * g * x * x + x;
}
int main(){
    double x,y;
//1.2
    x = 5;
    y = tinh_y(x);
    printf("The position of bullet: y(%.2f) = %.2f \r\n", x, y);
    scanf("%d", &x);
    y = tinh_y(x);
//1.3
    if (y > 50 || y < 30) {
        printf("The bullet got out \r\n");
    } else {
        printf("The bullet got a goal \r\n");
    }
    return 0;
}
