#include<stdio.h>

int main()
{
    char grade;
    printf("Enter the grade\n");
    scanf("%c", &grade);

    switch (grade){
        case 'A' : printf("Perfect"); break;
        case 'B' : printf("Good"); break;
        case 'C' : printf("Average"); break;
        case 'D' : printf("Failed"); break;

        default : printf("Invalid case\n");

    }
}