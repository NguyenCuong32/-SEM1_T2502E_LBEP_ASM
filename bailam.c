              // Chú thích nếu thầy xem bài làm  hãy ctrl/. Thanks you!
              //Bài làm

// 1.a viết công thức tính y(X)
// #include <stdio.h>
// int main(){
//     float x,y,g = 9.8;
//     y = (-0.5*g*x*x) + x;
//     return 0;
// }

//1.b: Tính y(x) với x = 5;
// #include <stdio.h>
// int main(){
//     float x = 5,y,g = 9.8;
//     y = (-0.5*g*x*x) + x;
//     printf("Gía trị của y(x) là %.3f",y);
//     return 0;
// }



// 1.c: Nhập vào bàn phí giá trị của x

// #include <stdio.h>
// int main(){
//     float x, y, g = 9.8;
//     printf("Nhập vào giá trị của x: ");
//     scanf("%f",&x);
//     y = (-0.5*g*x*x) + x;
//     if (y > 50 || y < 30)
//     {
//         printf("The bullet got out");
//     }
//     else if (y<=50 && y>=30) 
//     {
//         printf("The bullet got a goal");
//     }
//     return 0;
// }



// Bài 2.1)

// a) sử dụng vòng lặp for
// #include <stdio.h>
// int main(){
//     int i;
//     int mang[6] = {7, 6, 3, 34, 10, 710};
//     for ( i = 0; i < 6; i++)
//     {
//         printf("The element %d of the array is %d\r\n",i+1, mang[i]);
//     }
//     return 0;
// }


// b) Using loop “while”
// #include <stdio.h>
// int main(){
//     int i=0;
//     int mang[6] = {7, 6, 3, 34, 10, 710};
//     while (i<6)
//     {
//         printf("The element %d of the array is %d\r\n",i+1, mang[i]);
//         i++;
//     }
//     return 0;
// }

// c) Using loop “do while”
// #include <stdio.h>
// int main(){
//     int i=0;
//     int mang[6] = {7, 6, 3, 34, 10, 710};
//     do
//     {
//         printf("The element %d of the array is %d\r\n",i+1, mang[i]);
//         i++;
//     } while (i<6);
//     return 0;
// }

 
// bai2.2: Viết hàm tìm giá trị lớn nhất của mảng và hiển thị lên màn hình
// #include <stdio.h>
// int main(){
//     int i=0;
//     int mang[6] = {7, 6, 3, 34, 10, 710};
//     int max = mang[0];
//     for ( i = 1; i < 6; i++)
//     {
//         if (mang[i]>max)
//         {
//             max = mang[i];
//         }
//     }
//     printf("Gía trị lớn nhất trong mảng: %d",max);
//     return 0;
// }































