#include <stdio.h> //Import stdio.h libraries to handle inputting and outputting.

int main(void) {
float windSpeed = 0;

// Ask the user the windspeed

printf("How fast are the winds?: ");
scanf("%f", &windSpeed);

// Determine which category the wind speeds fall into then print the category.

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