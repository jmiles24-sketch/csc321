//Jayden Miles
//CSC321
//Lab5
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    // Four Different Variable Types 
    int myInt = 42;
    float myFloat = 3.14f;
    double myDouble = 99.999;
    char myChar = 'Z';

    printf("--- Variable Values and Addresses ---\n");
    // Printing values and addresses using & operator
    printf("Type: int    | Value: %d       | Address: %p\n", myInt, (void*)&myInt);
    printf("Type: float  | Value: %f     | Address: %p\n", myFloat, (void*)&myFloat);
    printf("Type: double | Value: %lf   | Address: %p\n", myDouble, (void*)&myDouble);
    printf("Type: char   | Value: %c        | Address: %p\n", myChar, (void*)&myChar);
    printf("\n");

    //Scope Demonstration
    if (1) {
        int insideScope = 100;
        printf("Inside scope variable: %d\n", insideScope);
    }

    // Check Error
    printf("Trying to access outside scope: %d\n", insideScope); 

    // Array Cont Memory
    printf("--- Array Addresses (Contiguous Memory) ---\n");
    int numbers[10] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int i; 

    for(i = 0; i < 10; i++) {
        // Printing index, value, and address to show they are sequential
        printf("numbers[%d] = %d | Address: %p\n", i, numbers[i], (void*)&numbers[i]);
    }

    return EXIT_SUCCESS;
}

