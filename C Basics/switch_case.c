#include <stdio.h> 

int main() {
    int day;
    printf("Enter day (1-3): ");
    scanf("%d", &day);

    // Using a switch-case statement to handle different values
    switch (day) {
        case 1: //for character '1'
            printf("Monday\n");
            break; // Break to exit the switch-case. 
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        default:
            printf("Not a valid day\n");
    }

    return 0;
}