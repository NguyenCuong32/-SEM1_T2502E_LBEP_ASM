#include<stdio.h>
    int arrays[6] = {7, 6, 3, 34, 10, 710};
    int i;
void pratice2a()
{
    for (int i = 0; i < 6; i++)
    {
        printf("the element %d of the array is %d\n",i+1,arrays[i]);
    }
    
}

void pratice2b()
{
    while (i<6)
    {
        printf("the element %d of the array is %d\n",i+1,arrays[i]);
        i++;
    }
    
}

void pratice2c()
{
    do
    {
        printf("the element %d of the array is %d\n",i+1,arrays[i]);
        i++;
    } while (i<6);
    
}

void pratice22()
{
    int max = arrays[0];
    for (int i = 0; i < 6; i++)
    {
        if (arrays[i]>max)
        {
            max = arrays[i];
        }
    }
    printf("so lon nhat la : %d\n",max);
} 

int main()
{
    
    pratice2a();
    pratice2b();
    pratice2c();
    pratice22();
    return 0;
}