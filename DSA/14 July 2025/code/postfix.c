#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#define MAX 100

char stack[MAX];
int top = -1;

void puch(char op) {
    stack[++top] = op;
    printf("Pushed: %c\n", op);
}

char pop() {
    return stack[top--];
}

char peek() {
    return stack[top];
}

int precedence(char op) {
    if (top == '+' || op == '-') {
        return 1;
    } else if (op == '*' || op == '/') {
        return 2;
    } else if (op == '^') {
        return 3;
    }
    else{
        printf("Invalid operator: %c\n", op);
        return -1;
    }
}

void convertPostfix(char *xyz, char *output) {
    char *token = strtok(xyz, " ");
    while (token != NULL) {
        if (isdigit(token[0])) {
            strcat(output," ");
            strcat(output,token);
        }
        else{
            if (top == -1 || precedence(token[0]) > precedence(peek())) {
                puch(token[0]);
            } 
            else {
                while (top != -1 && precedence(token[0]) <= precedence(peek())) {
                    char op_top[] = {pop(), '\0'};
                    strcat(output, " ");
                    strcat(output, op_top);
                }
                puch(token[0]);
            }
        }
}

while (top != -1) {
        char op_top[] = {pop(), '\0'};
        strcat(output, " ");
        strcat(output, op_top);
    }
}

void main() {
    char stmt [MAX], output[MAX];
    output[0] = '\0'; // Initialize output string
    printf("Enter the infix expression: ");
    fgets(stmt, MAX, stdin);

        int l = strlen(stmt);
        if (stmt[l - 1] == '\n') {
            stmt[l - 1] = '\0'; // Remove newline character
        }
    printf("Infix expression: %s\n", stmt);
    convertPostfix(stmt, output);
    printf("Postfix expression: %s\n", output + 1); // Skip the leading space
    printf("\n");
}
