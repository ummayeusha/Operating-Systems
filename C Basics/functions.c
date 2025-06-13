#include <stdio.h>

//Function with parameters
int sum(int n, int m);         
void table(int n);             
void calculate(float a);    

int main() {
    int a, b;
    printf("Enter the numbers: ");
    scanf("%d %d", &a, &b);    

    int s = sum(a, b); //Calling sum function and storing result in 's'

    int n;
    printf("Enter number for the table: ");
    scanf("%d", &n);         
    table(n); //Calling table function

    float f;
    printf("Enter value: "); 
    scanf("%f", &f);
    calculate(f); //Calling calculate function

    return 0; 
}

//Function to add two integers and return the result
int sum(int x, int y) {
    return x + y;  //Returns the sum of x and y
}

//Function to print multiplication table of a number
void table(int n) {
    for (int i = 1; i <= 10; i++) {
        printf("%d\n", i * n);
    }
} 

//Function to increase a float value by 15%
void calculate(float a) {
    a = a + (a * 0.15);  //Increases the value of a by 15%
    printf("Value is: %f\n", a); 
}
