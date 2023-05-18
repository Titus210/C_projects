#include <stdio.h>

int main()
{
    // declare first number, second number, and previous number
    int first_number = 0, second_number = 1, prev_number, times_to_sum;

    printf("Enter number of times to sum: ");
    scanf("%d", &times_to_sum);

    printf("Number sum: \n");

    if (times_to_sum >= 1)
        printf("%d\n", first_number); // print the first number (0)

    if (times_to_sum >= 2)
        printf("%d\n", second_number); // print the second number (1)

 
    for (int i = 3; i <= times_to_sum; i++)
    {
        prev_number = second_number;
        second_number += first_number;
        first_number = prev_number; // reassign the first number to the previous number

        printf("%d\n", second_number); // print the current number
    }
  

    return 0;
}
