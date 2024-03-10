//Write a program to evaluate a postfix expression.

#include<stdio.h>
#define MAX 10
float Stack[MAX];
int top;
void push(float item);
float pop();
float evaluate(float L, float R, char op);

int main() {
    int item, i;
    char ch;
    float L, R, UR;
    top=-1;
    char postfix[MAX];
    printf("Enter a Postfix Expression : ");
    gets(postfix);
    int n=strlen(postfix);
    for(i=0; i<n; i++){
        ch=postfix[i];
        if(ch>='0' && ch<='9'){
            item=ch-48;
            push(item);
        }
        else{
            R=pop();
            L=pop();
            UR=evaluate(L, R, ch);
            push(UR);
        }
    }
    printf("The Result is : %f\n", Stack[0]);
}

void push(float item){
    if(top==MAX-1){
        printf("OVERFLOW.\n");
    }
    else{
        top++;
        Stack[top]=item;
    }
}

float pop(){
    char item;
    if(top==-1){
        printf("UNDERFLOW.\n");
    }
    else{
        item=Stack[top];
        top=top-1;
        return(item);
    }
}

float evaluate(float L, float R, char op){
    float t;
    if(op=='+'){
        t=L+R;
    }
    else if(op=='-'){
        t=L-R;
    }
    else if(op=='/'){
        t=L/R;
    }
    else{
        t=L*R;
    }
    return t;
}
