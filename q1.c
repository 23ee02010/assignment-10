#include <stdio.h>

struct student{
    int rollno;
    char name[100];
    int age;
};

int main()
{
    struct student students[5];

    
    for (int i = 1; i < 6; i++){

        students[i].rollno = i ; 
        printf("Enter name of Roll Number %d : ", students[i].rollno);
        scanf("%s", students[i].name);
        printf("Enter age for Roll Number %d : ", students[i].rollno);
        scanf("%d", &students[i].age);
    }

   
    printf("info of roll number 2:Name:   %s Age:    %d", students[2].name, students[2].age);

    return 0;
}