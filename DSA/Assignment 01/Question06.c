// Q6. Write a program in C to evaluate a Postfix expression using a stack. Show detailed execution for the following expression: AB+CD-*EF+/GH-^ where A=5, B=3, C=8, D=2, E=6, F=4, G=9, H=3.

#include <stdio.h>

#define MAX 100

int stack[MAX], top = -1;

void push(int val) {
    stack[++top] = val;
}

int pop() {
    if (top == -1) return -1;
    return stack[top--];
}

int evaluate(int a, int b, char op) {
    switch (op) {
        case '+': return a + b;
        case '-': return a - b;
        case '*': return a * b;
        case '/': return a / b;
        case '^': {
            int res = 1;
            for (int i = 0; i < b; i++) res *= a;
            return res;
        }
    }
    return 0;
}

int main() {
    char postfix[] = "AB+CD-*EF+/GH-^";
    int values[26] = {0};
    values['A' - 'A'] = 5;
    values['B' - 'A'] = 3;
    values['C' - 'A'] = 8;
    values['D' - 'A'] = 2;
    values['E' - 'A'] = 6;
    values['F' - 'A'] = 4;
    values['G' - 'A'] = 9;
    values['H' - 'A'] = 3;
    int i = 0;
    while (postfix[i]) {
        char c = postfix[i];
         if (c >= 'A' && c <= 'Z') {
            push(values[c - 'A']);
        } else {
            int b = pop();
            int a = pop();
            push(evaluate(a, b, c));
        }
        i++;
    }
    printf("Value: %d\n", pop());
    return 0;
}

// Excution Steps:
// https://github.com/lakshyajain1508/sjcem/blob/main/DSA/Assignment%2001/Output/Output_06ex.png