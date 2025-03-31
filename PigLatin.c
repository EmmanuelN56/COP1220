#include <stdio.h> //Import stdio.h libraries to handle inputting and outputting.
#include <ctype.h> //Import ctype.h libraries to handle characters.
#include <string.h> // Import string.h to handle strings.

int main() {
    char holder[100];
    
    // Prompt the user for input, search for words seperated by whitespace till the whole string is seen.
    printf("Sentence: ");
    while (scanf("%99s", holder) == 1) {
        char punctuation = '\0';
        size_t len = strlen(holder);
        if (len > 0 && ispunct(holder[len-1])) {
            punctuation = holder[len-1];
            holder[len-1] = '\0';
            len--;
        }

        // Make the entire string lowercase.
        for (int i = 0; holder[i]; i++) {
            holder[i] = tolower(holder[i]);
        }

        // Use strchr to find vowels, increment the variable untill vowel is found or end is reached.
        int first_vowel = 0;
        while (first_vowel < len && !strchr("aeiou", holder[first_vowel])) {
            first_vowel++;
        }

        // If statment will concate the yay suffix, ay suffic, and print N constants.
        if (first_vowel == 0) {
            printf("%syay%c ", holder, punctuation);
        } else {
            printf("%s%.*say%c ", holder + first_vowel, first_vowel, holder, punctuation);
        }
    }
    return 0;
}