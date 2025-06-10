#include <stdio.h> 

int main() {
    
    int day;
    printf("Enter day (1-3): ");// Prompting user for input
    scanf("%d", &day);
    // Validating input
    if (day < 1 || day > 3) {
        printf("Invalid input. Please enter a number between 1 and 3.\n");
        return 1; // Exit if input is invalid
    }
    // Displaying the day of the week based on user input
    printf("You entered: %d\n", day);

    // Using switch-case to determine the day of the week
    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        default:
            printf("Invalid day\n");
    }

    return 0;
}
