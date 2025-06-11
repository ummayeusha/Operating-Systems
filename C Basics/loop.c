#include <stdio.h>

int main(){

    //WHILE LOOP
    int i=3;
    while (i<=5) {
        printf("hello\t"); 
        i++;
    }

    //print the numbers from 0 to n, if n is given by the user
    int n;
    scanf("%d", &n);
    i = 0;
    while (i <= n) {
        printf("%d\t", i);
        i++;
    }
    
    //DO-WHLE LOOP
    //print the numbers from 0 to n, if n is given by the user
    i = 0;
    do {
        printf("%d\t", i);
        i++;
    } while (i <= n);

    //print the sum of first n natural numbers
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("\nSum is: %d\n", sum);

    sum = 0;
    for (int i = 1; i <= n; i--) {
        sum += i;
    }

    printf("\nSum is: %d\n", sum);

    sum = 0;
    //i is here to sum, and j is here to calculate in reverse
    for (int i = 1, j=n; i <= n && j>=1; i++, j--) {
        sum += i;
        printf("%d\n", j);
    }

    printf("\nSum is: %d\n", sum);
    
    sum = 0;  
    for (int j=n; j>=1; j--) {
        sum += j;  
        printf("%d\n", j);
    }

    printf("\nSum is: %d\n", sum);
  
    return 0;
}