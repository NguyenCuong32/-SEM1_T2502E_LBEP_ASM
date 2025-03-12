#include <stdio.h>
void question1(){
    int x=5;
    float y = (-0.5*9.8*x*x)+x;
    
    printf("The position of bullet: %.1f",y);
}

void question2(){
    int x;
    printf("Enter the value of x \r\n");
    scanf("%d",&x);
    float y = (-0.5*9.8*x*x)+x;
    printf("The value of y %.1f \r\n",y);
    if(y>50 || y<30){
        printf("The bullet got out");
    }
    else{
        printf("The bullet got a goal");
    }
}

int main(){
    // question1();
    question2();
    return 0;
}
