#include <stdio.h>

int main() {
    int day;

    while (1) {
        printf("Enter a number (1 to 7) to get the day of the week: ");
        scanf("%d", &day);

        if (day >= 1 && day <= 7) {
            // Valid input, print the day and break the loop
            if (day == 1)
                printf("Monday\n");
            else if (day == 2)
                printf("Tuesday\n");
            else if (day == 3)
                printf("Wednesday\n");
            else if (day == 4)
                printf("Thursday\n");
            else if (day == 5)
                printf("Friday\n");
            else if (day == 6)
                printf("Saturday\n");
            else
                printf("Sunday\n");

            break;  // Exit loop after successful input
        } else {
            printf("Invalid input! Please enter a number between 1 and 7.\n\n");
        }
    }

    return 0;
}