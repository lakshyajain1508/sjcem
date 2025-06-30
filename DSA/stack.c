#include<stdio.h>
#define MAX 5

int arr[MAX];
int top = -1;

void push(int d){
	
	if(top == MAX-1){
		printf("\nStack Overflow cannot add = %d",d);
	}
	else{
		top++;
		arr[top] = d;
		printf("\nPushed = %d",d);
	}
}

void pop(){
	if(top >-1){	
	    int d;
		d = arr[top];
		printf("\nPoped = %d",d);
		top--;
	}
	else{
		printf("\nStack Empty");
	}
}
void show() {
    if (top == -1) {
        printf("\nStack is empty.");
        return;
    }

    printf("\nStack elements: ");
    for (int i = 0; i <= top; i++) {
        printf("%d ", arr[i]);
    }
}
void peek() {
    if (top > -1) {
        printf("\nTop element = %d", arr[top]);
    } else {
        printf("\nStack is empty. Nothing to peek.");
    }
}
void main(){
	push(50);
	push(40);
	push(30);
	push(20);
	push(10);
	push(5);
	peek();

	show();
	pop();
	pop();
	pop();
	pop();
	pop();
	pop();
	peek();
	
}	
			

