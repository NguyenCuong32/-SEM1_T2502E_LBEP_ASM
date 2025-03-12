#include <stdio.h>
//bai 2.1
int main (){
    int Array[6]={7, 6, 3, 34, 10, 710};
    int i;
    for (int i = 0; i < 6; i++)
    {
        printf("The element %d of the array: %d \r\n", i+1, Array[i]);
    }
    return 0;
    
}
int main (){
    int Array[6]={7, 6, 3, 34, 10, 710};
    int i;
    while (i<6)
    {
        printf("The element %d of the array: %d \r\n", i+1, Array[i]);
        i++;
    }
    return 0;
    
}
int main (){
    int Array[6]={7, 6, 3, 34, 10, 710};
    int i = 0;
    do
    {
        printf("The element %d of the array: %d \r\n", i+1, Array[i]);
        i++;
    } while (i<6);
    return 0;
}
bai 2.2
int findLarest(int array[], int size){
    int i = 0;
    int largest = array[0];
    do
    {
        if (array[i]>largest)
        {
            largest = array[i];
        }
        i++;
        
    } while (i<size);
    return largest;
    
}
int main (){
    int Array[6]={7, 6, 3, 34, 10, 710};
    int size = sizeof(Array)/sizeof(Array[0]);
    int largest = findLarest(Array, size);
    printf("The largest element in the array: %d \r\n", largest);
    return 0;
}
    