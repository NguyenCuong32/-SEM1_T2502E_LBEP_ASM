#include <stdio.h>
int main() { 
   int Arrays[6] = {7, 6, 3, 34, 10, 710};
   int i;
   printf("a, dung vong lap for:\r\n");
   for(int i = 0; i < 6; i++)
   {
   printf("phan tu thu %d cua mang la %d \r\n ",i+1,Arrays[i]);
   }
   printf("b, su dung vong lap while :\r\n");
   i = 0;
   while (i<6)
   {
    printf("phan tu thu %d cua mang la %d \r\n",i+1,Arrays[i]);
     i++;
   }
   printf("c. su dung do while:\r\n");
   i=0;
   do
   {
    printf("phan tu thu %d cua mang la %d \r\n",i+1,Arrays[i]);
    i++;
   }while (i<6);
   
   return 0;
}