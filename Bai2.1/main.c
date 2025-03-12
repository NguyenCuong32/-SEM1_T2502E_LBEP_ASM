    
// BÀI 2.1 
//a) Using loop "for"
// #include<stdio.h>
// void phan_a(){
//     int element[6] ={7,6,3,34,10,710};
//     for (int i = 0; i < 6; i++)
//     { 
//         printf("The element %d of the array is %d \r\n",i+1, element[i]);
//     }
// }
//     int main(){
//         phan_a();
//         return 0;
//     }
    // USING LOOP "WHILE"
    // #include<stdio.h>
    // void phan_b()
    // {
    //     int i=0;
    //     int n=6;
    //     int element[6] ={7,6,3,34,10,710};
    //     while (i<n)
    //     {
    //         printf("The element %d of the array is %d\n", i + 1, element[i]);
    //         i++;   
    //     }
    // }
    //     int main(){
    //     phan_b();
    //     return 0;
    // }
    //c) using loop "do while"
    #include <stdio.h>
    void phan_c()
    {
        int i=0;
        int n=6;
        int element[6] ={7,6,3,34,10,710};
        do{
            printf("The element %d of the array is %d\r\n", i+1, element[i]);
            i++;
        }
        while (i<n);
    }
       int main(){
        phan_c();
        return 0;
     }