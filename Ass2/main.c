#include <stdio.h>
int main() {
    float g = 9.8;
    int n;
    float y;
    int x = 5;
    float result = -0.5 * g * x * x + x;
    printf("The position of bullet: y(5) = %.2f \r\n" ,result);
    printf("Enter x in expression y(x)= -0.5*g*x*x+x : \r\n");
    scanf("%d", &n);
    y = -0.5 * g * n * n + n;
    printf("Result: y(%d) = %.2f\n", n, y);
    if (y > 50 || y < 30)
    {
        printf("The bullet got out");
    }
    else
    {
        printf("The bullet got a goal");
    }
        return 0;
}
