#include <stdio.h>

int main(){

    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    
    //IF-ELSE
    //block where codes run between curly braces
    if (age > 18) {
        printf("An adult\n");
    } else {
        printf("A minor\n");
    }
    
    //block where curly braces are not used for single line of the condition 
    if (age > 18)
        printf("An adult\n");
    printf("hiii\n"); 
    /*else
        printf("A minor");
        #here if-else terminates as after reading the line "printf" for "if" it reads the "printf" on line 19. the if-else hence breaks the flow and is not compiled showing an error
        #curly braces are hence a good practice
        #the above "else" gives error because the "if" is considered complete after line 19. so "else" cant be read unless it's directly attached to its "if" */
    
    //IF-ELSE IF-ELSE
    if (age >= 18) {
        printf("An adult\n");
    } else if (age >= 13 && age < 18){
        printf("Teenager\n");
    } else {
        printf("A minor\n");
    }
    
    //IF-IF-IF (where it doesnt check "if this then that else that". here it doesn't compare between the if elses, rather checks all of the if's)
    if(age >= 18){
        printf("Adult\n");
    }
    if(age < 18){
        printf("Responsible\n"); /* this will print even if age is ture or false
    #both if blocks can run if condition matches (they are not related like else-if)*/
    }
    
    //TERNARY: condition ? do if TRUE : do if FALSE
    age >= 18 ? printf("An adult\n") : printf("A minor");
    //ternary is a shortcut for simple if-else conditions, used inside expressions too
    
    return 0;
}