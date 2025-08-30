// Q10. Design a program in C that accepts a string and checks whether it is a Palindrome using stack operations. Demonstrate with at least two test cases.

#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c) {
    stack[++top] = c;
}

char pop() {
    if (top == -1) return '\0';
    return stack[top--];
}

int isPalindrome(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len; i++) push(str[i]);
    for (int i = 0; i < len; i++) {
        if (str[i] != pop()) return 0;
    }
    return 1;
}

int main() {
    char s1[] = "radar";
    char s2[] = "hello";
    if (isPalindrome(s1)) {
        printf("%s is Palindrome\n", s1);
    } else {
        printf("%s is Not Palindrome\n", s1);
    }
    if (isPalindrome(s2)) {
        printf("%s is Palindrome\n", s2);
    } else {
        printf("%s is Not Palindrome\n", s2);
    }
    return 0;
}
