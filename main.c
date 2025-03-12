#include <stdio.h>
// Q1:
int main(){
    int g =9.8;
    int x =5;
int result= -(1/2*g*x^2+x);
printf(" the position of bullet: y(5):%d\r\n",result);
}
// // Q2:
// void array_example1(){
//     int array[6]={7,6,3,34,10,710};
//     // 2.1 cau a
//     for (int i = 0; i <6;)
//     {
//         printf(" The element %d of the array is: %d \r\n",i,array[i]);
//             i=i+1;
//     }
// // 2.1 cau b
// int i=0;
// while (i<6)
// {
//     printf("The element %d of the array is %d \r\n",i,array[i]);
//     i++;
// }

// // 2.1 cau c
// int i=0;
// do
// {
//     printf("The element %d of the array is %d \r\n",i,array[i]);
//     i++;
// } while (i<6);
// // 2.2:
// int i=0;
// int largestnumber=array[i];
// while (i < 6)
// {
//     if (largestnumber>array[i])
//     {
//         largestnumber = array[i];
//     }
//     printf("the largest of the array: %d \r\n",i,array[i]);
//     i++;
// }

// }

// int main(){
// array_example1();
//    return 0;
// }