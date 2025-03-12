#include <stdio.h>

int Array[6] = {7, 6, 3, 34, 10, 710};
int i = 0;
void for_lopp()
{

    printf("For loop\n");
    for (i = 0; i < 6; i++)
    {
        printf("The element %d of the array is %d.\n", i + 1, Array[i]);
    }
}

void while_lopp()
{
    printf("While loop\n");
    while (i < 6)
    {
        printf("The element %d of the array is %d.\n", i + 1, Array[i]);
        i++;
    }
}

void do_while_loop()
{
    printf("Do while loop\n");
    do
    {
        printf("The element %d of the array is %d.\n", i + 1, Array[i]);
        i++;
    } while (i < 6);
}

void larger_number()
{
    int largest = Array[0];
    for (i = 0; i < 6; i++)
    {
        if (Array[i] > largest)
        {
            largest = Array[i];
        }
    }
    printf("The largest number in the array is %d.\n", largest);
}

int main()
{
    for_lopp();
    while_lopp();
    do_while_loop();
    larger_number();
    return 0;
}