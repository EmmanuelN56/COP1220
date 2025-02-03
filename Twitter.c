#include <stdio.h>
#include <string.h>

int main(void) {
char tweet[500];
printf("Write your tweet: ");
fgets(tweet, sizeof(tweet), stdin);

int letters = 0;

for(int i = 0; tweet[i] != '\0'; i++)
{
letters++;
}

if(letters > 140) {
    printf("Rejected\n");
}
else
{
    printf("Posted\n");
}
}