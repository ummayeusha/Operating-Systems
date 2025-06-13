#include <stdio.h>

int main(){
    
    //iteration
    int i;
    // Using a for loop to iterate from 1 to 5
    //integer
    for (i = 0; i <= 10; i++) {
        printf("%d\t", i);
    }
    
    printf("done\n");
    
    //float
    for (float i=1.0; i<=8; i++){
        printf("%f\n", i);
    }
    
    printf("done\n");
    
    //character
    for (char i='a'; i<='z'; i++){
        printf("%c\t", i);
    }
    
    printf("done\n");
    
     //infinite loop: initial value theke start hoye it doesn't stop as stopping condition nai
    for (int i = 1; ; i++) {
        printf("hello ");
    }
    
    return 0;
}