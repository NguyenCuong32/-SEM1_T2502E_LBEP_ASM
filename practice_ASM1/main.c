#include <stdio.h>

void question_1_2()
{
    float g = 9.8;
    int x = 5;
    float yx = -1 / 2 * g * (x * x) + x;
    printf("The position of bullet: y(5) = %.2f\n", yx);
}

void question_3(int x)
{
    float g = 9.8;
    float yx = -1 / 2 * g * (x * x) + x;
    if (yx > 50 || yx < 30)
    {
        printf("The bullet got out\n");
    }
    if (yx <= 50 && yx >= 30)
    {
        printf("The bullet got a goal\n");
    }
}

int main()
{
    question_1_2();

    int x = 0;
    printf("Enter x: ");
    scanf("%d", &x);
    question_3(x);
    return 0;
}