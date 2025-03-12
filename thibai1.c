#include<stdio.h>

int main(){
    int x;
    scanf("%d",&x);
    double y=(double)-1/2*9.8*x*x +x;
    printf("The position of bullet: %.2lf\n",(double)-1/2*9.8*25+5);
    if(y>50 || y<30) printf("The bullet got out");
    if (y<=50 && y>=30) printf("The bullet got a goal");
}