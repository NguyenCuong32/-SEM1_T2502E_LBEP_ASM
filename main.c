#include <stdio.h>
// 1.1
void example1(){
    char Array[6] = {'A', 'p', 't', 'e', 'c', 'h'};
    
    for(int i = 0; i < 6; i++) {
        printf("The element %d of the array is %c \r\n", i + 1, Array[i]);
    }
}


void example2(){
    char Array[6] = {'A', 'p', 't', 'e', 'c', 'h'};
    int i = 0;
    
    while(i < 6) {
        printf("The element %d of the array is %c \r\n", i + 1, Array[i]);
        i++;
    }
}

void example3(){
    char Array[6] = {'A', 'p', 't', 'e', 'c', 'h'};
    int i = 0;
    
    do {
        printf("The element %d of the array is %c \r\n", i + 1, Array[i]);
        i++;
    } while(i < 6);
}

int main(){
    example1();
    example2();
    example3();
    
    return 0;
}

// 1.2
#include <stdio.h>
void findp(char arr[], int size) {
    for(int i = 0; i < size; i++) {
        if(arr[i] == 'p')
        {
            printf("The position of 'p' is= %d \r\n", i); 
        }
    }
}

int main() {
    char Array[6] = {'A', 't', 'e', 'c', 'h', 'p'};
    findp(Array, 6);
    return 0;
}


//2.

#include <stdio.h>
#include <string.h>

struct ClassRoom {
    char roomName[50]; 
    int roomNo;        
};
void inputClassRoom(struct ClassRoom *classroom) {
    printf("Enter Room Name: ");
    fgets(classroom->roomName, 50, stdin);
    classroom->roomName[strcspn(classroom->roomName, "\n")] = 0; 
    
    printf("Enter Room Number: ");
    scanf("%d", &classroom->roomNo);
    getchar(); 
}

void displayAllClassRooms(struct ClassRoom classrooms[], int size) {
    for(int i = 0; i < size; i++) {
        printf("Room name: %s\n", classrooms[i].roomName);
        printf("Room no: %d\n", classrooms[i].roomNo);
    }
}

int main() {
   
    struct ClassRoom classRooms[10];
    
    printf("Enter information for 10 classrooms:\n");
    for(int i = 0; i < 10; i++) {
        printf("\nClassroom %d:\n", i + 1);
        inputClassRoom(&classRooms[i]);
    }
    
    
    printf("\nAll Classroom Information:\n");
    displayAllClassRooms(classRooms, 10);
    
    return 0;
}



  

 

