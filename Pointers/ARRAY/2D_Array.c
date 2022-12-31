#include <stdio.h>
#include <time.h>

int main()
{
    // declare and inititalize index variables
    int i, j = 0;
    // declare 2D array
    int array[4][3] = {
        {1, 2, 3},
        {5, 6, 7},
        {8, 9, 11},
        {12, 13, 14}};

    // variables to measure time
    clock_t start, end;
    double cpu_time_used;

    // print 2D array using 2 for loop iteration

    start = clock();

    for (i = 0; i <= 3; i++)
    {
        for (j = 0; j <= 4; j++)
        {
            printf("array[%d][%d] = %d\n", i, j, array[i][j]);
        }
    }

    end = clock();

    cpu_time_used = ((double)(end - start));

    printf("normal way took %f seconds\n", cpu_time_used);

    // using pointers to print items
    // declare pointer
    int *ptr;

    start = clock();

    for (ptr = &array[0][0]; ptr < &array[4 - 1][3 - 1]; ptr++)
    {
        printf("%d ", ptr);
    }

    end = clock();

    cpu_time_used = ((double)(end - start));
    printf("Pointers way took %f seconds\n", cpu_time_used);

    return 0;
}