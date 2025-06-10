#include <stdio.h>

int main() {

    //INCREMENT operator: i++ (Post increment)/ ++i (Pre increment)
    int i=1;
    printf("%d\n", i++); //Post increment: use then increase;
    printf("%d\n", i);
    
    i=9;
    printf("%d\n", ++i); //Pre increment: increase then use;
    printf("%d\n", i);
    
    //DECREMENT operator: i-- (Post decrement)/ --i (Pre decrement)
    i=1;
    printf("%d\n", i--); //Post decrement: use then decrease;
    printf("%d\n", i);
    
    i=9;
    printf("%d\n", --i); //Pre decrement: decrease then use;
    printf("%d\n", i);
    
    return 0;
}