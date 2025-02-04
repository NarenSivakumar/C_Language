#include<stdio.h>


void printpAge(int *PAge)
{
    printf("you are %d old\n", *PAge);
}



int main()
{
    // * = indirection operator (value at address)

    int age =  21;

     // Good practice to initialize with NULL
    int *PAge = &age;

    //printf("Age is %d\n", *PAge); // Dereferencing the pointer to get the value
    //printf("Size of value is %d\n", sizeof(age));
    //printf("Size of pointer is %d\n", sizeof(PAge));
    
    printpAge(PAge);
    return 0;
}