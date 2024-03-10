//Write a menu driven program for Stack implementation (PUSH, POP, DISPLAY) using array.

#include<stdio.h>
#define MAX 10

int Stack[MAX];
int top;
void push(int item);
void pop();
void display();

int main(){
    int item, option=-1;
    top=-1;
    while(option != 0){
        printf("Press 1 for PUSH,\n2 for POP,\n3 for DISPLAY,\n0 for EXIT. : ");
        scanf("%d", &option);
        switch(option){
        case 1:
            printf("Enter number  for PUSH : ");
            scanf("%d", &item);
            push(item);
            break;
        case 2:
            pop();
            break;
        case 3:
            display();
            break;
        case 0:
            printf("EXITING.....\n");
            break;
        default:
            printf("ENTER INPUT BETWEEN 0 to 3\n");
        }
    }
    return 0;
}

void push(int item){
    if (top==MAX-1){
        printf("OVERFLOW.\n");
    }
    else{
        top=top+1;
        Stack[top]=item;
    }
}

void pop(){
    if (top==-1){
        printf("UNDERFLOW.\n");
    }
    else{
       printf("POPED VALUE : %d\n", Stack[top]);
       top--;
    }
}

void display(){
    int i;
    for (i=top; i>=0; i--){
        printf("%d \n", Stack[i]);
    }
}
