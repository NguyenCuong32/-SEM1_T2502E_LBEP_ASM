#include <stdio.h>

void forexample(){
    int Array[6]={7,6,3,34,10,710};
    for(int i=0;i<6;i++){
        printf("The element %d of the array is %d \r\n",i+1,Array[i]);
    } 
}

void whileexample(){
    int Array[6]={7,6,3,34,10,710};
    int i=0;
    while (i<6)
    {
        printf("The element %d of the array is %d \r\n",i+1,Array[i]);
        i++;
    }
}

void dowhileexample(){
    int Array[6]={7,6,3,34,10,710};
    int i=0;
    do
    {
        printf("The element %d of the array is %d \r\n",i+1,Array[i]);
        i++;
    } while (i<6);
}

void findmax(){
    int Array[6]={7,6,3,34,10,710};
    int max;
    for(int i=0;i<6;i++){
        if(i==0){
            max=Array[0];
        }
        else{
            if(max<Array[i]){
                max=Array[i];
            }
        }
    }
    printf("Max of the Array is %d",max);
}

int main(){
    // forexample();
    // whileexample();
    // dowhileexample();
    findmax();
    return 0;
}