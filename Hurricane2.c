#include <stdio.h> //Import stdio.h libraries to handle inputting and outputting.

// Create a void function that compares its parameter to different values, wherever it falls the catagory is then printed, nothing is returned.
void find_category(float windSpeed)
{
    if (windSpeed >=157)
{
    printf("Category Five Hurricane");
}
    else if (windSpeed >= 130)
{
    printf("Category Four Hurricane");
}
    else if (windSpeed >= 111)
{
    printf("Category Three Hurricane");
}
    else if(windSpeed >= 96)
{
    printf("Category Two Hurricane");
}
    else if(windSpeed >= 74)
{
    printf("Category One Hurricane");
}
    else if (windSpeed < 74)
{
    printf("Not a Hurricane");
}
}

int main(void) {
float windSpeed = 0;

// Ask the user the windspeed
printf("How fast are the winds?: ");
scanf("%f", &windSpeed);
find_category(windSpeed);
}