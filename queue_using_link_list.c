//Write a program using single Linked List to implement Queue Data Structure.

#include <stdio.h>
#include <stdlib.h>

struct queue {
    int data;
    struct queue *next;
};

typedef struct queue node;

node *head = NULL;
node *last_node = NULL;

void ENQUE(int item);
void DEQUE();
void DISPLAY();

int main() {
    int option;
    int item;
    while (1) {
        printf("Enter 1 for ENQUE, 2 for DEQUE, 3 for DISPLAY, 4 for EXIT: ");
        scanf("%d", &option);
        switch (option) {
            case 1:
                printf("Enter number to ENQUE: ");
                scanf("%d", &item);
                ENQUE(item);
                break;
            case 2:
                DEQUE();
                break;
            case 3:
                DISPLAY();
                break;
            case 4:
                printf("Exiting.\n");
                exit(0);
            default:
                printf("Invalid Option.\n");
        }
    }
    return 0;
}

void ENQUE(int item) {
    node *temp = (node *)malloc(sizeof(node));
    if (temp == NULL) {
        printf("Memory allocation failed.\n");
        return;
    }
    temp->data = item;
    temp->next = NULL;
    if (head == NULL) {
        head = temp;
        last_node = temp;
    } else {
        last_node->next = temp;
        last_node = temp;
    }
}

void DEQUE() {
    if (head == NULL) {
        printf("Underflow.\n");
        return;
    }
    node *temp = head;
    printf("Dequeued item: %d\n", head->data);
    if (head == last_node) {
        head = NULL;
        last_node = NULL;
    } else {
        head = head->next;
    }
    free(temp);
}

void DISPLAY() {
    node *current = head;
    if (current == NULL) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements: ");
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}
