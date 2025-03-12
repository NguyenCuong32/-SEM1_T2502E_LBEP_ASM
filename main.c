#include <stdio.h>
//2.1
void b21(){
    int array[6] = {7,6,3,34,10,710};
    for(int i=0;i<6;i++){
        printf(" The element %d of the array is %d \r\n", i+1, array[i]);
    }
    printf("\r\n");
    int i=0;
    while (i<6)
    {
        printf("The element %d of the array is %d \r\n", i+1, array[i]);
        i++;
    }
    printf("\r\n");
    i = 0;
    do
    {
        printf(" The element %d of the array is %d \r\n", i+1, array[i]);
        i++;
    } while (i<6);
}
//2.2
int findLargest22(int array[], int i){
    int largest = array[0];
    for (int i=1;i<6;i++){
        if (array[i]>largest){
            largest = array[i];
        }
    }
    return largest;
}
int main(){
    b21();
    int array[6] = {7,6,3,34,10,710};
    int largest = findLargest22(array, 6);
    printf("Largest element is: %d \r\n", largest);
    return 0;
}