// SOlve Postfix statement.
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#define MAX 100
// stack and its functions........
int stack[MAX];
int top = -1;
void push(int val){
	stack[++top]= val;
	//printf("\n%c Pushed to stack.", op);
}
int pop(){
      return stack[top--];
}
///////////////////////////////////////////////

int doOperation(char op, int a, int b)
{
int res;
    switch(op)
    {
        case '+':
        		 res= a+ b;
        		return res;
        case '-':
        		 res= a- b;
        		return res;
        case '*':
        		 res= a* b;
        		return res;
        case '/':
        		 res= a/ b;
        		return res;
             
    }
}

void solvePostfix(char *stmt)
{
	char *token= strtok(stmt, " ");
   while(token !=NULL)
   {
         if(isdigit(token[0])) // if token is digit 
         {
              push(atoi(token));   // "10" =>  10
         }
         else // if token is operator
         {
              char op= token[0];
              int b= pop();
              int a= pop();
              push(doOperation(op, a , b));
         }
      token= strtok(NULL," ");   
   }
   printf("\n ANS: %d",pop());

}
void main()
{
char stmt[MAX];
printf("\nEnter Postfix statement to solve: ");
	fgets(stmt, MAX, stdin);
	// to remov last \n from statement //////
	    int l = strlen(stmt);
	    if( stmt[l-1]== '\n'){
	           stmt[l-1]= '\0';    }
	//////////////////
	printf("\n Statement: %s",stmt);
    solvePostfix(stmt);
    printf("\n");
}