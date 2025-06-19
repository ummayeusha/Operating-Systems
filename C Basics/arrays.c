#include  <stdio.h>

int main() {

    //arrays: collection of similar data types stored in contiguous memory locations 
    int arr[5] = {1, 2, 3, 4, 5}; //declare and initialize
    int i; //Declare a variable i for loop iteration

    //Print the elements of the array using a for loop
    for (i=0; i<5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    //Print the elements of the array using a while loop
    i=0;
    while (i<5) {
        printf("%d ", arr[i]);
        i++;
    }
    //taking input from the user
    int n;
    printf("\nSize of the array: ");
    scanf("%d", &n);

    int narr[n];
    printf("Elements: ", n);
    for (i=0; i<n; i++) {
        scanf("%d", &narr[i]); //Read n elements from user input
    }

    return 0;
}