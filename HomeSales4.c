#include <stdio.h> // Import stdio.h libraries to handle inputting and outputting.
#include <ctype.h> 

typedef struct {
    char initial;
    int salesTotal;
} SalesPerson;

int main(void) {

// Create, declare, and initalize our variables and struct (filled with inital and sales amounts), eventually the values given by the user will bee passed to a file.
int salesAmount = 0;
int total = 0;
char person;

SalesPerson team[3] = {
    {'D', 0},
    {'E', 0},
    {'F', 0}
};

// Open file that will be used to hold user input
FILE *file = fopen("saleInformation.txt", "w");


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

    // In the file listed write the inital and amount of the sale
    fprintf(file, "%c %d\n", person, salesAmount);
}

// Close the file and reopen with a different mode, this time r
fclose(file);

file = fopen("saleInformation.txt", "r");

// While the loop is active read the data from the file and add it to the structs.
while (fscanf(file, " %c %d", &person, &salesAmount) == 2) {
    for (int i = 0; i < 3; i++) {
        if (person == team[i].initial) {
            team[i].salesTotal += salesAmount;
            break;
        }
    }
    total += salesAmount;
}

fclose(file);

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

return 0;
}