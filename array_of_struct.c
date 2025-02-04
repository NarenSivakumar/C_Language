#include<stdio.h>
#include<string.h>


struct student
{
    char name[12]; 
    float CGPA;
};

int main()
{
   struct student student1 = {"Aravind",8.5};
   struct student student2 = {"Dilli",9.0};
   struct student student3 = {"Vicky",7.5};

   struct student students[] = {student1, student2, student3};

    printf("Students Name and CGPA:\n");
    for(int i = 0; i < sizeof(students)/sizeof(students[0]); i++)
    {
        printf("%s - CGPA: %.2f\n",students[i].name,students[i].CGPA);
    }
}
