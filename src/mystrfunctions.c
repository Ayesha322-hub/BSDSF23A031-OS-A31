#include "../include/mystrfunctions.h"

// Return length of string
int mystrlen(const char* s) {
    int len = 0;
    while (s && s[len] != '\0') len++;
    return len;
}

// Copy string src into dest, return length of copied string
int mystrcpy(char* dest, const char* src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return i;
}

// Copy at most n characters, return length copied
int mystrncpy(char* dest, const char* src, int n) {
    int i = 0;
    while (i < n && src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return i;
}

// Concatenate src onto dest, return new length of dest
int mystrcat(char* dest, const char* src) {
    int i = 0, j = 0;
    while (dest[i] != '\0') i++;
    while (src[j] != '\0') {
        dest[i++] = src[j++];
    }
    dest[i] = '\0';
    return i;
}
