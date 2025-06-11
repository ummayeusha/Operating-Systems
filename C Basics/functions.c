#include <stdio.h>

//"void": it doesn't return any value
void printHi() {
    printf("hiii\n"); 
}

//This function takes an integer n and prints numbers from 1 to n
void printNumbers(int n) {
    for (int i = 1; i <= n; i++) {  //Loop starts from 1 and ends at n
        printf("%d\t", i);
    }
}

//This function calculates and returns the sum of numbers from 1 to n
int sumNatNum(int n) {
    int sum = 0;  //Initialize sum as 0
    for (int i = 1; i <= n; i++) {
        sum += i; 
    }
    return sum;  //Return the total sum
}

int main() {
    printHi();  //Call printHi() to print "hiii"

    int n = 10; 
    printNumbers(n);  //Call printNumbers(n) to print numbers from 1 to n
    
    // Call the function to calculate sum, and print the result
    printf("Sum is: %d\n", sumNatNum(n));  

    return 0; 
}
