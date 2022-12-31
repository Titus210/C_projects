#include <stdio.h>

int main(){
    // declare and initialize array
    int arr[5] = {1,2,3,4};
    int i = 0;


    // declare and initialize pointer to array
    int *ptr = arr;
    int (*ptr_2)[5] = &arr;

    // loop and print items in array
    for( i ; i <= sizeof(arr); i++){
        printf("%d ", arr[i]);
    }
    return 0;

}