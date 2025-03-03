#include <stdio.h> // Import stdio.h libraries to handle inputting and outputting.

int main(void) {
int temperature[5] = {0, 0, 0, 0, 0};
int currentTemp = 0;

for(int i = 0; i < 5; i++)
{
    printf("temperature ");
    scanf(" %d", &currentTemp);

    while(currentTemp < -30 || currentTemp > 130)
    {
        printf("Temperature %d is invalid, Please enter a valid temperature between -30 and 130 ", currentTemp);
        scanf(" %d", &currentTemp);
    }

    temperature[i] = currentTemp;
}

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

printf("5-day Temperatures: [");
for (int i = 0; i < 5; i++) 
{
    printf("%d ", temperature[i]);
}
printf("]");

}