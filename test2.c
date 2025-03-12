
//Given array Array[6] ={7, 6, 3, 34, 10, 710}
//Write a program display on screen by following format:
//“The element 1 of the array is 7”.
//“The element 2 of the array is 6”.
//“The element 3 of the array is 3”.
//“The element 4 of the array is 34”.
//“The element 5 of the array is 10”.
//“The element 6 of the array is 710”.
#include <stdio.h>

void largest(int Array[6]);

int main()
{
    int Array[6] = {7, 6, 3, 34, 10, 710};
    int i = 0;
    do
    {
        printf("The element %d of the array is %d\n", i+1, Array[i]);
        i++; // Increment i to avoid infinite loop
    } while (i < 6); 

    //function to find the largest of the Array and display to screen.
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