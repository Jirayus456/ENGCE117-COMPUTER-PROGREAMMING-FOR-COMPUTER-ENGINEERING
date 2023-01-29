//??? ??????? ???????? 65543206008-6 Sec 1
//https://youtu.be/aze8q40J_14
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
  int data;
  struct Node *next;
} nd;

void ShowAll(nd **node);
nd *AddNode(nd **node, int num);
void UpdateNode(nd **node, int checknum, int changenum);
void ShowBack(nd **node);
void SwapNode(nd **node, int swap1, int swap2);

int main() {
  nd *start = NULL;
  AddNode(&start, 10);
  AddNode(&start, 20);
  AddNode(&start, 30);
  AddNode(&start, 40);
  ShowAll(&start);
  
  	/*//UpdateNode
  UpdateNode(&start, 10, 99);
  ShowAll(&start);
  UpdateNode(&start, 10, 98);
  ShowAll(&start);*/
  
  	/*//ShowBack Node
  ShowBack(&start);*/
  
  	/*//Swap Node
  SwapNode(&start, 20, 30);
  ShowAll(&start);
  SwapNode(&start, 40, 10);
  ShowAll(&start);*/
  
  return 0;
}

void ShowAll(nd **node) {
  nd *now = *node;
  while (now != NULL) {
    printf("%d ", now->data);
    now = now->next;
  }
  printf("\n");
}

nd *AddNode(nd **node, int num) {
  nd *now;
  nd *newnode = new nd;
  newnode->next = NULL;
  newnode->data = num;
  if (*node == NULL) {
    *node = newnode;
  } else {
    now = *node;
    while (now->next != NULL) {
      now = now->next;
    }
    now->next = newnode;
  }
  return newnode;
}

void UpdateNode(nd **node, int checknum, int changenum) {
  nd *checknode = *node;
  int check = 0;
  while (checknode != NULL) {
    if (checknode->data == checknum)
      check++;
    checknode = checknode->next;
  } if (check == 1) {
    nd *newnode = *node;
    while (newnode->data != checknum || newnode == NULL)
      newnode = newnode->next;
    if (newnode != NULL)
      newnode->data = changenum;
  }
}

void ShowBack(nd **node) {
  nd *temp, *sb;
  nd *now = *node;
  while (now != NULL) {
    temp = now->next;
    now->next = sb;
    sb = now;
    now = temp;
  }
  *node = sb;
  ShowAll(node);
}

void SwapNode(nd **node, int swap1, int swap2) {
  nd *checknode = *node;
  int check = 0;
  while (checknode != NULL) {
    if (checknode->data == swap1) {
        check++;
    } else if (checknode->data == swap2) {
        check++;
    }
    checknode = checknode->next;
  }
  if (check == 2) {
      while (*node != NULL) {
          if ((*node)->data == swap1) {
              (*node)->data = swap2;
          } else if ((*node)->data == swap2) {
              (*node)->data = swap1;
          }
          node = &(*node)->next;
      }
  }
}

