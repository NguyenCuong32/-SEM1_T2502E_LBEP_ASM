#include <stdio.h>
int main()
{
    int Array[6] = {7,6,3,34,10,710};
    printf("Su dung vong lap for \n");
    for (int i = 1; i < 6; i++)
    {
        printf("The element %d of the array is %d \r\n",i,Array[i]);
    }
    
    return 0;
}