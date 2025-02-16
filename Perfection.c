#include <stdio.h> 

// Create a function that looks at all numbers before the number in the parameter, determine if they divide evenly an add divisor to the sum, this will be returned to where the function was called
int sum_of_divisors(int number)
{
    int sum = 0;
  for(int i = 1; i < number; i++)
    {
        if(number % i == 0)
        {
            sum+=i;
        }
    }  
    return sum;
}

// Create a function that will determine if the number placed in the parameter is a perfect number.
void determine_if_perfect(int number)
{
int total = sum_of_divisors(number);

// If the value from the sum of divisors is the same as the users original number it is perfect, otherwise its not.
if(total == number)
{
    printf("Perfect Number");
}
else
{
    printf("Not a Perfect Number");
}
}

int main(void) {
// Create and declare a variable to hold the users input, initalize it to zero.
int number = 0;

// Prompt the user to enter a number and place the value inside of the number variable
printf("Enter your number: ");
scanf("%d", &number);

// Call the function to determine if the user has inputted a perfect number.
determine_if_perfect(number);
}