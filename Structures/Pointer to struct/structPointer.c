#include <stdio.h>

struct person{
    int age;
    int weight;
};

int main(){
    struct person *person_ptr, person_1;
    person_ptr = &person_1;

    printf("Enter age: ");
    scanf("%d", &person_ptr->age);
    
    printf("Enter weight: ");
    scanf("%d", &person_ptr->weight);

    printf("Displaying info \n");
    printf("Age %d\n", person_ptr->age);
     printf("Weight %d\n", person_ptr->weight);
}