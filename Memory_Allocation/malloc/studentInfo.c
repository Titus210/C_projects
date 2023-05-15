#include <stdio.h>
#include <stdlib.h>


// main program
int main(){
	// variables declaration
	int i, n;
	printf("\nEnter Number of students Id to store: ");
	scanf("%d", &n);

	// allocate size using malloc
	int *ptr = (int*)malloc(n * sizeof(int));

	if (ptr == NULL){
		printf("Memory Not Available");
		exit(1);
	}
	for (i =0; i < n; i++){
		printf("Enter Admission Number ");
		scanf("%d", ptr + i);
	}
	for (i = 0; i <n; i++)
		printf("\n%d", *(ptr + i));
	return 0;
}
