//Write a program to check whether brackets have been given properly or not in an expression.

#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int Stack[MAX];
int top;
void push(char ch);
char pop();
int bcheck(char st, char end);

int main(){
    int i, k;
    char ch1, ch2;
    top=-1;
    printf("Provide an expression : ");
    char string[MAX];
    gets(string);
    int n=strlen(string);
    for(i=0; i<n; i++){
        ch1=string[i];
        if(ch1 == '[' || ch1=='{' || ch1=='('){
            push(ch1);
        } else {
            ch2=pop();
            k=bcheck(ch2, ch1);
            if(k==0){
                printf("Wrong.\n");
                break;
            }
            if(k==1){
                printf("Right.\n");
                break;
            }
        }
    }
    return 0;
}

void push(char ch){
    if (top==MAX-1){
        printf("OVERFLOW.\n");
    }
    else{
        top++;
        Stack[top]=ch;
    }
}

char pop(){
    char item;
    if(top==-1){
        printf("UNDERFLOW.\n");
    }
    else{
        item=Stack[top];
        top--;
        return item;
    }
}

int bcheck(char st, char end){
    if(st=='[' && end==']'){
        return 1;
    }
    else if(st=='{' && end=='}'){
        return 1;
    }
    else if(st=='(' && end==')'){
        return 1;
    } else {
        return 0;
    }
}
