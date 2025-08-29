// Q1. Write a program in C to implement various string manipulation functions (copy, concatenate, reverse, substring search). Explain each function with suitable examples.
#include <stdio.h>
#include <string.h>

void stringCopy(char *dest, const char *src) {
    while ((*dest++ = *src++));
}

void stringConcat(char *dest, const char *src) {
    while (*dest) dest++;
    while ((*dest++ = *src++));
}

void stringReverse(char *str) {
    int len = 0;
    while (str[len]) len++;
    for (int i = 0; i < len / 2; i++) {
        char t = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = t;
    }
}

int substringSearch(const char *str, const char *sub) {
    int i, j;
    for (i = 0; str[i]; i++) {
        for (j = 0; sub[j]; j++) {
            if (str[i + j] != sub[j]) break;
        }
        if (!sub[j]) return i;
    }
    return -1;
}

int main() {
    char s1[100] = "Hello";
    char s2[] = "World";
    char s3[100];
    stringCopy(s3, s1);
    printf("Copy: %s\n", s3);
    stringConcat(s3, s2);
    printf("Concat: %s\n", s3);
    stringReverse(s3);
    printf("Reverse: %s\n", s3);
    int pos = substringSearch(s3, "dlro");
    printf("Substring 'dlro' found at index: %d\n", pos);
    return 0;
}