// Bhargvesh Bansotra
// 2022A1R065

// INCLUDE HEADER FILE

#include <stdio.h>

int MAXSIZE = 8;       
int stack[8];     
int top = -1;            

int isempty() {

   if(top == -1)
      return 1;
   else
      return 0;
}
   
int isfull() {

   if(top == MAXSIZE)
      return 1;
   else
      return 0;
}

int peek() {
   return stack[top];
}

int pop() {
   int data;
	
   if(!isempty()) {
      data = stack[top];
      top = top - 1;   
      return data;
   } else {
      printf("Could not retrieve data, Stack is empty.\n");
   }
}

int push(int data) {

   if(!isfull()) {
      top = top + 1;   
      stack[top] = data;
   } else {
      printf("Could not insert data, Stack is full.\n");
   }
}

int main() {
   // push items on to the stack 
    printf(" 1: push \n 2:pop \n 3: peek");
    int ch;
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
            int x;
            printf("enter a number to push into stack :");
            scanf("%d",&x);
            push(x);
            break;
    case 2:
        if(!isempty){
            pop();
        }
        else{
            printf("under flow !!!!");
        }
        break;
    case 3:
        peek();
        break;
    default:
        break;
    }


   return 0;
}