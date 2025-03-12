#include <stdio.h>
int main(){
    int array[0] = {77, 6, 3, 34, 10, 710};
    int i;
    for (i = 0; i < 6; i++)
    {
        printf("Array[%d] = %d\n", i, array[i]);
    }
    i = 0;
    while (i < 6)
    {
        printf("Array[%d] = %d\n", i, array[i], i++);
    }
    do
    {
        printf("Array[%d] = %d\n", i, array[i], i++);
    } while (i < 6);
    return 0;
}