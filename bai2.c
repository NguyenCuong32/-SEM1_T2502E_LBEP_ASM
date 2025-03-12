#include<stdio.h>
int main()
{
   int Arrays[6] = {7,6,3,34,10,710};
   int i;
   printf("a. dung vong lap for:\r\n");
    for (i = 0; i < 6; i++)
    {
     printf (" phan tu thu %d cua mang la %d \r\n",i+1,Arrays[i]);
    }
    printf("b. su dung vong lap while :\r\n");
    i = 0;
    while (i<=6)     
    {
        printf (" phan tu thu %d cua mang la %d \r\n",i+1,Arrays[i]);
        i++;
    }
    printf("c. su dung do while :\r\n");
    i = 0;
    do
    {
        printf (" phan tu thu %d cua mang la %d \r\n",i+1,Arrays[i]);
        i++;
    } while (i<6);
    
//2.2
printf("Bai tap 2.2\r\n");
int min = Arrays[0];
    int max = Arrays[0];
    for (int j = 0; j < 6; j++)
{
   if (Arrays[j]<min)
   {
     min = Arrays[j];
   }
   if (Arrays[j]>max)
   {
   max = Arrays[j];
   }

}
printf ("Min = %d\r\n", min);
printf ("Max = %d\r\n", max);

    return 0;

}