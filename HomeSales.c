#include <stdio.h> 

int main(void) {

int danielleSales = 0;
int edwardSales = 0;
int francisSales = 0;
int salesAmount = 0;
int total = 0;
char person;

while(1)
{
    printf("Enter the inital of the salesperson: ");
    scanf(" %c", &person);

    if(person == 'z')
    {
        break;
    }

    while (person != 'd' && person != 'e' && person != 'f' && person != 'D' && person != 'E' && person != 'F')
    {
        printf("Error, invalid salesperson selected, please try again: ");
        scanf(" %c", &person);
    }

    printf("Sale: ");
    scanf("%d", &salesAmount);

    if (person == 'd' || person == 'D') 
    {
        danielleSales += salesAmount;
        } 
        else if (person == 'e' || person == 'E') 
        {
        edwardSales += salesAmount;
        } 
        else if (person == 'f' || person == 'F') 
        {
        francisSales += salesAmount;
        }

total += salesAmount;

}

printf("Grand Total: $%d\n", total);

if (edwardSales > francisSales && edwardSales > danielleSales)
{
    printf("Highest Sale: E");
}
else if (danielleSales > edwardSales && danielleSales > francisSales)
{
    printf("Highest Sale: D");
}
else if (francisSales > edwardSales && francisSales > danielleSales)
{
    printf("Highest Sale: F");
}

}