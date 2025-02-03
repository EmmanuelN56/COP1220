#include <stdio.h> 

int main(void) {
// Create a variable to hold the sum of our for loop and the users number, initalize to zero.
int number = 0;
int sum = 0;

// Prompt the user to enter a number and place the value inside of the number variable
printf("Enter your number: ");
scanf("%d", &number);

// Create a for loop that goes through all the numbers less than the input , check if tey divide evenly, and add divisor to sum
for(int i = 1; i < number; i++)
{
    if(number % i == 0)
    {
        sum+=i;
    }
}

// If the result of the loop is equal to the users inital number we have a perfect number.
if(sum == number)
{
    printf("Perfect Number");
}
else
{
    printf("Not a Perfect Number");
}

}