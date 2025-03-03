#include <stdio.h> // Import stdio.h libraries to handle inputting and outputting.

int main(void) {

// Create, declare, and initalize our arrays to hold sales people and sales persons inital, then our variables which hold sales amount, inital given by user, and the overall total.
int sales[3] = {0, 0, 0};
int salesAmount = 0;
int total = 0;
char person;
char salespersons[3] = {'D', 'E', 'F'};

// Create a loop that runs indefinitely, once a certain charecter has been entered the loop is broken 
while(1)
{
    printf("salesperson: ");
    scanf(" %c", &person);

    if(person == 'z')
    {
        break;
    }

    // If the user inputs a charecter that isnt an inital, print an error and prompt them for further input.
    while (person != 'd' && person != 'e' && person != 'f' && person != 'D' && person != 'E' && person != 'F')
    {
        printf("Error, invalid salesperson selected, please try again: ");
        scanf(" %c", &person);
    }

    printf("Sale: ");
    scanf("%d", &salesAmount);

    // Use an else if to add the amount of the sale to the array place corresponding to the salesperson.
    if (person == 'd' || person == 'D') 
    {
        sales[0] += salesAmount; 
    } 
    else if (person == 'e' || person == 'E') 
    {
        sales[1] += salesAmount; 
    } 
    else if (person == 'f' || person == 'F') 
    {
        sales[2] += salesAmount; 
    }

    total += salesAmount;
}

// Output the Grand Total for all sales made, use an else if to determine which salesman sold the highest amount.
printf("Grand Total: $%d\n", total);

if (sales[1] > sales[2] && sales[1] > sales[0])
{
    printf("Highest Sale: E");
}
else if (sales[0] > sales[1] && sales[0] > sales[2])
{
    printf("Highest Sale: D");
}
else if (sales[2] > sales[1] && sales[2] > sales[0])
{
    printf("Highest Sale: F");
}
}