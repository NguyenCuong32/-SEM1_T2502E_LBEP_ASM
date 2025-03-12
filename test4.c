#include <stdio.h>
void largest(int Array[6]);
int main()
{
    int Array[6] = {7, 6, 3, 34, 10, 710};
    int i = 0;
    while (i < 6)
    {
       printf("The element %d of the array is %d\n", i+1, Array[i]); 
       i++;
    }
    largest(Array);
    return 0;
}
    void largest(int Array[6])
{
    int largest = Array[0];
    for (int i = 1; i < 6; i++) 
    {
        if (Array[i] > largest)
        {
            largest = Array[i];
        }
    }
    printf("The largest number of the array is %d\n", largest);
}
   