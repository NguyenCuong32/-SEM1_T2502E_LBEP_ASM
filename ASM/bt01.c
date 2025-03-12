#include<stdio.h>
float tinh_y(float x){
    return (-0.5f * 9.8f * x * x) + x;
}
int main(){
    float x;
    printf("Vi tri cua vien dan: y(5) = %.2f\n", tinh_y(5));
    printf("Nhap x: ");
    scanf("%f", &x);
    float y = tinh_y(x);
    printf("y(%.2f) = %.2f\n", x, y);
    printf("%s\n", (y > 50 || y < 30) ? "Vien dan ra ngoai" : "Vien dan trung dich");
    return 0;
}
