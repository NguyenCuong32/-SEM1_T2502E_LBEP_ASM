#include<stdio.h>

// bt1
void question_A(){
    int x;
    float g=9.8;
    float y;
    y=-0.5*g*x*x-x;
    printf("y(x)= -0.5*g*x*x-x\n");
}
    
void question_B(){
    int x=5;
    float g=9.8;
    float y;
    y=-0.5*g*x*x-x;
    printf("The position of bullet y(5): %f\n",y);
}

void question_c(){
    float x;
    printf("nhap x:  \n");
    scanf("%f",&x);
    float g=9.8;
    float y;
    y=-0.5*g*x*x-x;
    if (y<=50&y>=30)
    {
        printf("The bullet got a goal");
    }
    
    else
    {
        printf("The bullet got out");
    }

    


}
//bt2
void question2_1_a(int array[]){
    int i;
    for (i = 0; i < 6; i++) {
        printf("The element %d of the array is %d\n",i + 1, array[i]);
    }
}
void question2_1_b(int array[]){
    int i=0;
    while (i<6)
    {
        printf("The element %d of the array is %d\n",i + 1, array[i]);
        i++;
    }
    
}
void question2_1_c(int array[]){
    int i=0;
    do{
        printf("The element %d of the array is %d\n",i + 1, array[i]);
        i++;
    } while (i<6);
    
}
void question2_2(int array[]){
    int max = array[0];
    for (int i = 0; i < 6; i++){
        if (array[i] > max) {
            max = array[i];
        }
    }
    printf("max= %d\n", max);
}



int main(){
    question_A();
    question_B();
    question_c();
    int array[6] = {7, 6, 3, 34, 10, 710};
    question2_1_a(array);
    question2_1_b(array);
    question2_1_c(array);
    question2_2(array);


    

    
    
    
    
    return 0;

    

}