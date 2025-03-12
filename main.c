#include <stdio.h>
// bai 1
float way_of_bullet(float x){
    float g = 9.8;
    float y;
    y = -1/2*g*x*x+x;
    printf("Function to caculate: %.3f\r\n", y);
    return 0;
}

int main (){
    float x = 5, g = 9.8, y;
    y = -1/2*g*x*x+x;
    printf("The position of bullet: y(5) %.3f\r\n", y);
    return 0;
}

int main(){
        float x, g = 9.8, y;
        printf("Nhap gia tri bien x: \r\n");
        scanf("%f", &x);
        y = -1/2*g*x*x+x;
        if (y>50 || y<30)
        {
            printf("The bullet got out \r\n");
        }
        else if (y <= 50 && y >= 30)
        {
            printf("The bullet a goad \r\n");
        }


    return 0;
}

