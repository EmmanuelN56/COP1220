#include <stdio.h> // Import stdio.h libraries to handle inputting and outputting.
#include <ctype.h> 

typedef struct {
    char initial;
    int salesTotal;
} SalesPerson;

int main(void) {

// Create, declare, and initalize our arrays to hold sales people and sales persons inital, then our variables which hold sales amount, inital given by user, and the overall total.
int salesAmount = 0;
int total = 0;
char person;

SalesPerson team[3] = {
    {'D', 0},
    {'E', 0},
    {'F', 0}
};


// Create a loop that runs indefinitely, once a certain charecter has been entered the loop is broken 
while(1)
{
    printf("salesperson: ");
    scanf(" %c", &person);
    person = toupper(person);

    if (person == 'Z') 
    {
        break;
    }


    // If the user inputs a charecter that isnt an inital, print an error and prompt them for further input.
    while (person != 'D' && person != 'E' && person != 'F') {
        printf("Error, invalid salesperson selected, please try again: ");
        scanf(" %c", &person);
        person = toupper(person); 
    }
    

    printf("Sale: ");
    scanf("%d", &salesAmount);

    // Use an else if to add the amount of the sale to the array place corresponding to the salesperson.
    if (person == team[0].initial) {
        team[0].salesTotal += salesAmount;
    }
    else if (toupper(person) == team[1].initial) {
        team[1].salesTotal += salesAmount;
    }
    else if (toupper(person) == team[2].initial) {
        team[2].salesTotal += salesAmount;
    }    

    total += salesAmount;
}

// Output the Grand Total for all sales made, use an else if to determine which salesman sold the highest amount.
printf("Grand Total: $%d\n", total);

if (team[0].salesTotal > team[1].salesTotal && team[0].salesTotal > team[2].salesTotal) {
    printf("Highest Sale: D\n");
}
else if (team[1].salesTotal > team[0].salesTotal && team[1].salesTotal > team[2].salesTotal) {
    printf("Highest Sale: E\n");
}
else if (team[2].salesTotal > team[0].salesTotal && team[2].salesTotal > team[1].salesTotal) {
    printf("Highest Sale: F\n");
}
}