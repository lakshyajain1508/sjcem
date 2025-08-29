// Q5. Write a program in C to convert a following Infix expression to Postfix expression using a stack. Trace the conversion step-by-step for the following expression: ((A + B) * (C - D) / (E + F)) ^ (G - H).

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
char peek() {
    if (top == -1) return '\0';
    return stack[top];
}
int precedence(char c) {
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return 0;
}
int isOperator(char c) {
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '^';
}
int isOperand(char c) {
    return (c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9');
}

void infixToPostfix(char *infix, char *postfix) {
    int i = 0, k = 0;
    while (infix[i]) {
        char c = infix[i];
        if (isOperand(c)) {
            postfix[k++] = c;
        } else if (c == '(') {
            push(c);
        } else if (c == ')') {
            while (top != -1 && peek() != '(') {
                postfix[k++] = pop();
            }
            pop();
        } else if (isOperator(c)) {
            while (top != -1 && precedence(peek()) >= precedence(c) && c != '^') {
                postfix[k++] = pop();
            }
            push(c);
        }
        i++;
    }
    while (top != -1) {
        postfix[k++] = pop();
    }
    postfix[k] = '\0';
}
int main() {
    char infix[] = "((A+B)*(C-D)/(E+F))^(G-H)";
    char postfix[MAX];
    printf("Infix: %s\n", infix);
    infixToPostfix(infix, postfix);
    printf("Postfix: %s\n", postfix);
    return 0;
}
// Trace of conversion step-by-step:
// https://github.com/lakshyajain1508/sjcem/blob/main/DSA/Assignment%2001/Output/Output_05ex.png