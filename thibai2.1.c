#include<stdio.h>

int main(){
    int a[6]={7,6,3,34,10,710};
    for(int i=0;i<6;i++){
        printf("The element %d of the array is %d\n",i+1,a[i]);
    }
    int i=0;
    while(i<6){
        printf("The element %d of the array is %d\n",i+1,a[i]);
        ++i;
    }
    int j=0;
    do{
        printf("The element %d of the array is %d\n",j+1,a[j]);
        ++j;
    }while(j<6);
    
}