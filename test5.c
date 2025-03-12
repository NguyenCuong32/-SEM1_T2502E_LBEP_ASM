#include <stdio.h>

// funtion to cal y(x)
double calculateY(double x) {
    double g = 9.8;
    return -0.5 * g * x * x + x;
}

int main() 
{
    // cal y(x) and print
    double y5 = calculateY(5);
    printf("The position of bullet: y(5) = %.2f\n", y5);

    // input x from user
    double x;
    printf("Enter a value for x: ");
    scanf("%lf", &x);
    double yx = calculateY(x);

    // check y(x)
    if (yx > 50 || yx < 30) 
    {
        printf("The bullet got out.");
    } else if ( yx <= 50 && yx >= 30 )
       {
         printf("The bullet got a goal.");
    }


    return 0;
}
