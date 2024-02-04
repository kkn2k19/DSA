//Write a menu driven program for Stack implementation (PUSH, POP, DISPLAY) using array.

#include<stdio.h>
#define SIZE 10

int STACK[SIZE];
int TOP;
void PUSH(int value);
void POP();
void PEEK();
void DISPLAY();

int main() {
  int value, option;
  TOP = -1;
  while (option != 0) {
    printf("Press 1 for PUSH Operation.\n2 for POP Operation.\n3 for PEEK Operation.\n4 for DISPLAY Operation.\n0 for Exiting the Program. : ");
    scanf("%d", &option);
    switch (option) {
      case 1:
          printf("Enter value to PUSH into STACK. : \n");
          scanf("%d", &value);
          PUSH(value);
          break;
      case 2:
          POP();
          break;
      case 3:
          PEEK();
          break;
      case 4:
          DISPLAY();
          break;
      case 0:
          printf("EXITING.\n");
    }
  }
  return 0;
}

void PUSH(int value) {
  if (TOP == SIZE-1) {
    printf("OVERFLOW.\n");
  } else {
    TOP++;
    STACK[TOP] = value;
  }
}

void POP() {
  int value;
  if (TOP == -1) {
    printf("UNDERFLOW.\n");
  } else {
    value = STACK[TOP];
    printf("POPED VALUE : %d\n", value);
    TOP--;
  }
}

void PEEK() {
  if (TOP == -1) {
    printf("UNDERFLOW.\n");
  } else {
    printf("PEEK VALUE OF THE STACK : %d\n",  STACK[TOP]);
  }
}

void DISPLAY() {
  int i;
  for (i = TOP; i>=0; i--) {
    printf("%d\n", STACK[i]);
  }
}
