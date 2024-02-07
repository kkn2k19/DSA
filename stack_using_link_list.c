#include<stdio.h>
#include<stdlib.h>

struct box{
    int data;
    struct box *next;
};

typedef struct box node;

node *head;

int main() {
    head=NULL;
    int option=-1, value;
    while(option != 0){
        printf("Press 1 for PUSH operation,\n2 for POP operation,\n3 for DISPLAY operation,\n0 for Exiting from the problem : ");
        scanf("%d", &option);
        switch(option){
            case 1:
                printf("Enter number to PUSH to Stack : ");
                scanf("%d", &value);
                push(value);
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            case 0:
                printf("EXITING.\n");
                break;
            default:
                printf("Invalid Option.\n");
        }
    }
    return 0;
}

void push(int value){
    node *temp;
    temp=(node *)malloc(sizeof(node));
    temp->data=value;
    temp->next=head;
    head=temp;
}

void pop(){
    node *temp=head;
    if(head==NULL){
        printf("Underflow.\n");
    }
    else {
        printf("Deleted item : %d\n", temp->data);
        head=head->next;
        free(temp);
    }
}

void display(){
    node *dh=head;
    while(dh != NULL){
        printf("%d\n", dh->data);
        dh = dh->next;
    }
    printf("\n");
}
