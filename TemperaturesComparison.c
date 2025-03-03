#include <stdio.h> // Import stdio.h libraries to handle inputting and outputting.

int main(void) {
// Create an array to hold each temperature that will be given by the user
int temperature[5] = {0, 0, 0, 0, 0};
int currentTemp = 0;

// Use a for loop to assign a value to the spot on the array that matches the iteration count.
for(int i = 0; i < 5; i++)
{
    printf("temperature ");
    scanf(" %d", &currentTemp);

// While the temperature given by the user is out of ranch, give an error
    while(currentTemp < -30 || currentTemp > 130)
    {
        printf("Temperature %d is invalid, Please enter a valid temperature between -30 and 130 ", currentTemp);
        scanf(" %d", &currentTemp);
    }

    temperature[i] = currentTemp;
}

// Figure out if the temperatures are in ascending or descending order.
if (temperature[0] < temperature[1] && temperature[1] < temperature[2] && temperature[2] < temperature[3] && temperature[3] < temperature[4])
{
    printf("Getting warmer\n");
}
else if (temperature[0] > temperature[1] && temperature[1] > temperature[2] && temperature[2] > temperature[3] && temperature[3] > temperature[4])
{
    printf("Getting cooler\n");
}
else
{
    printf("It’s a mixed bag\n");
}

// Output each of the temperatures inside of our array.
printf("5-day Temperatures: [");
for (int i = 0; i < 5; i++) 
{
    printf("%d ", temperature[i]);
}
printf("]");

}
