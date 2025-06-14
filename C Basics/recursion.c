#include <stdio.h>

int fact(int n);  //Recursive function

int main() {
    int num;
    printf("Enter number: ");
    scanf("%d", &num);

    //check for non-negative input
    if (num<0) {
        printf("Not defined for negatives\n");
    } else {
        int res = fact(num);  //call recursive function
        printf("Factorial is %d\n", res);
    }

    return 0;
}

// Recursive function to find factorial
int fact(int n) {
    //Base case: factorial of 0 or 1 = 1
    if (n==0 || n==1) {
        return 1;
    } else {
        //Recursive case: n*factorial of (n-1)
        return n*fact(n - 1);
    }
}
