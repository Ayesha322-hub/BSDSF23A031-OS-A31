#include <stdio.h>
#include "../include/mystrfunctions.h"
#include "../include/myfilefunctions.h"

int main() {
    printf("--- Testing String Functions ---\n");
    char s1[100] = "Hello";
    char s2[100];

    printf("Length of '%s' = %d\n", s1, mystrlen(s1));
    mystrcpy(s2, s1);
    printf("Copied string: %s\n", s2);

    mystrncpy(s2, "WorldTest", 5);
    printf("Copied with strncpy: %s\n", s2);

    mystrcat(s1, " World");
    printf("Concatenated string: %s\n", s1);

    printf("\n--- Testing File Functions ---\n");
    FILE* f = fopen("sample.txt", "r");
    if (f) {
        int lines, words, chars;
        wordCount(f, &lines, &words, &chars);
        printf("Lines: %d, Words: %d, Chars: %d\n", lines, words, chars);
        fclose(f);
    }

    return 0;
}
