#include <stdio.h> //Import stdio.h libraries to handle inputting and outputting.

int main() {
    // Create an array to holder the characters from the users string
    char holder[300];
    int shift;
    
    // Prompt the user for their text, store the string.
    printf("Enter text: ");
    scanf("%299[^\n]", holder);
    
    // Prompt the user to enter the shift, store the value.
    printf("Enter shift: ");
    scanf("%d", &shift);
    
    // Make sure the shift is in the range of 0 to 25
    shift = (shift % 26 + 26) % 26;
    
    // Process all charecters of the string, determine if its uppercase, and shift from a to z
    printf("Cipher: ");
    for (int i = 0; holder[i]; i++) {
        char c = holder[i];
        if (c >= 'A' && c <= 'Z') putchar('A' + (c - 'A' + 26 - shift) % 26);
        else if (c >= 'a' && c <= 'z') putchar('a' + (c - 'a' + 26 - shift) % 26);
        else putchar(c);
    }
    printf("\n");
    
    return 0;
}