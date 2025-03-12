/*Given array Array[6] ={7, 6, 3, 34, 10, 710}
2.1. Write a program display on screen by following format:
'The element 1 of the array is 7'.
'The element 2 of the array is 6'.
'The element 3 of the array is 3'.
'The element 4 of the array is 34'.
'The element 5 of the array is 10'.
'The element 6 of the array is 710'.
a) Using loop 'for'
b) Using loop 'while'
c) Using loop 'do while'*/
#include <stdio.h>
int main(){
    int Array[6] = {7, 6, 3, 34, 10, 710};
    int i;
    printf("a. Using loop for:\r\n");
    for(i = 0; i < 6; i++){
        printf("The element %d of the array is: %d\n", i + 1, Array[i]);
    }
    printf("b. Using loop While:\r\n");
    i = 0;
    while(i < 6){
        printf("The element %d of the array is: %d\n", i + 1, Array[i]);
        i++;
    }
    printf("c. Using loop do while:\r\n");
    i = 0;
    do{
        printf("The element %d of the array is: %d\n", i + 1, Array[i]);
        i++;
    }while(i < 6);
    
    int min = Array[0];
    int max = Array[0];
    for(int j = 0; j < 6; j++)
    {
        if(Array[j] < min){
            min = Array[j];
        }
        if(Array[j] > max){
        max = Array[j];
        printf("The maximum element of the array is: %d\n", max);
        }
        printf("The minimum element of the array is: %d\n", min);
    }
    return 0;
  }