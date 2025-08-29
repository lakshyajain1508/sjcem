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
/* 

Explanation of each function with examples:

1. stringCopy(char *dest, const char *src)
Purpose:
Copies the string from src to dest.

How it works:

It uses a while loop to copy each character from src to dest.
The loop continues until the null terminator ('\0') is copied, which ends the string.
Example:
If src = "Hello" and dest is an empty array, after calling stringCopy(dest, src), dest will contain "Hello".

2. stringConcat(char *dest, const char *src)
Purpose:
Concatenates (appends) the string src to the end of dest.

How it works:

First, it moves the dest pointer to the end of the current string (where the null terminator is).
Then, it copies characters from src to this position, including the null terminator.
Example:
If dest = "Hello" and src = "World", after stringConcat(dest, src), dest will be "HelloWorld".

3. stringReverse(char *str)
Purpose:
Reverses the string str in place.

How it works:

It calculates the length of the string.
Then swaps characters from the start and end moving towards the center.
Example:
If str = "Hello", after stringReverse(str), str will be "olleH".

4. substringSearch(const char *str, const char *sub)
Purpose:
Searches for the substring sub inside the string str.

How it works:

It iterates over each character in str.
For each position, it checks if the substring sub matches starting at that position.
If a full match is found, it returns the starting index.
If no match is found, it returns -1.
Example:
If str = "HelloWorld" and sub = "World", substringSearch(str, sub) returns 5 because "World" starts at index 5.

These functions demonstrate basic string manipulation techniques in C, including copying, concatenation, reversal, and substring searching. Each function operates directly on character arrays (strings) and uses pointer arithmetic for efficient processing.
*/