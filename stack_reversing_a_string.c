//Write a program to reverse a String Using the Stack Data structure.

#include<stdio.h>
#include<stdlib.h>
#define MAX 20
int Stack[MAX];
int top;
void push(char ch);
char pop();

int main() {
    char ch;
    top=-1;
    char string[MAX];
    int i;
    printf("Provide a String : ");
    gets(string);
    int n = strlen(string);
    for (i=0; i<n; i++) {
        ch=string[i];
        push(ch);
    }
    for(i=0; i<n; i++){
        ch=pop();
        string[i]=ch;
    }
    printf("REVERSED STRING : ");
    puts(string);
    return 0;
}

void push(char ch) {
    if(top==MAX-1){
        printf("OVERFLOW.\n");
    }else{
        top++;
        Stack[top]=ch;
    }
}

char pop(){
    char item;
    if (top==-1){
        printf("UNDERFLOW.\n");
    }else{
        item=Stack[top];
        top--;
        return item;
    }
}
