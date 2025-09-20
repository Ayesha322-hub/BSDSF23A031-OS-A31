#include "../include/myfilefunctions.h"
#include <stdlib.h>
#include <string.h>

// Count lines, words, chars in file
int wordCount(FILE* file, int* lines, int* words, int* chars) {
    if (!file || !lines || !words || !chars) return -1;

    *lines = *words = *chars = 0;
    char c, prev = ' ';
    while ((c = fgetc(file)) != EOF) {
        (*chars)++;
        if (c == '\n') (*lines)++;
        if ((c == ' ' || c == '\n' || c == '\t') && (prev != ' ' && prev != '\n' && prev != '\t')) {
            (*words)++;
        }
        prev = c;
    }
    return 0;
}

// Grep-like search in file
int mygrep(FILE* fp, const char* search_str, char*** matches) {
    if (!fp || !search_str || !matches) return -1;

    size_t cap = 10, count = 0;
    *matches = (char**)malloc(cap * sizeof(char*));
    if (!*matches) return -1;

    char line[1024];
    while (fgets(line, sizeof(line), fp)) {
        if (strstr(line, search_str)) {
            if (count >= cap) {
                cap *= 2;
                *matches = realloc(*matches, cap * sizeof(char*));
            }
            (*matches)[count] = strdup(line);
            count++;
        }
    }
    return count;
}
