#include <stdio.h>
#include <stdlib.h>

struct person
{
    int age;
    float weight;
    char name[30];
};

int main()
{
    struct person *person_ptr;
    int i, n;

    printf("Enter number of people: ");
    scanf("%d", &n);

    // allocate memory for entered number of people
    person_ptr = (struct person *)malloc(n * sizeof(struct person));

    for (i = 0; i < n; i++)
    {
        printf("Enter first name, age respectively: ");
        scanf("%s %d", (person_ptr + i)->name, &(person_ptr + i)->age);
    }
    printf("Display Information:\n ");
    for (i = 0; i < n; ++i)
        printf("Name:%s\t Age: %d\n", (person_ptr + i)->name, (person_ptr + i)->age);
    return 0;
}