#include <stdio.h>
#include <stdlib.h>

struct Student
{
    char name[20];
    int id;
    int age;
};

int main()
{
    struct Student *student_ptr;
    int i, n;

    printf("Enter number of students: \n");
    scanf("%d", &n);

    student_ptr = (struct Student *)malloc(n * sizeof(struct Student));

    for (i = 0; i < n; ++i)
    {
        printf("Enter student name: ");
        scanf("%s", (student_ptr + i)->name);

        printf("Enter student age: ");
        scanf("%d", &(student_ptr + i)->age);

        printf("Enter student id: ");
        scanf("%d", &(student_ptr + i)->id);
    }

    printf("Displaying student information");
    for(i=0; i< n; i++){
        printf("\nName: %s \n Age: %d \n Id: \n%d", (student_ptr + i)->name, (student_ptr + i)->age, (student_ptr + i)->id);
    }
    return 0;
}