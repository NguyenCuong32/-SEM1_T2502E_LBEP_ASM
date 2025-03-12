#include<stdio.h>
int main()
{
    float x;
    float g = 9.8;
    float y;
        printf ("vi tri cua vien dan y(5) = %.2f \r\n", y = -0.5*9.8*5*5+5);

    printf("nhap so x = ");
    scanf("%f",&x);
    
    y = (-0.5*g*x*x)+x;
    printf("vi tri cua vien dan khi x = %.2f la : y(%2.f)= %.2f\n",x,x,y);
    if (y>50 || y<30)
    {
       printf (" vien dan ra ngoai");
    }
    if (y<=50 && y >= 30 )
    {
        printf (" vien dan trung dich");
    }
    

    return 0;
}