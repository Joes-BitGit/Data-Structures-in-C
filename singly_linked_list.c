#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int data;
  struct node *next;
}
node;

node* Insert_front(node* ptr_head, int x)
{
  node *temp = (node*)malloc(sizeof(node));
  if (temp != NULL)
  {
    temp->data = x;
    temp->next = ptr_head;
    ptr_head = temp;
  }
  else
  {
    printf("Temp did not work\n");
  }
  return ptr_head;
}

void Print(node* temp)
{
  printf("Data: ");
  while (temp != NULL)
  {
    printf(" %d", temp->data);
    temp = temp->next;
  }
  printf("\n");
}

int main()
{
  struct node* head = NULL;
  printf("How many numbers?\n");
  int n, i, x;
  scanf("%d", &n);
  for (i = 0; i < n; i++)
  {
    printf("Enter the number: \n");
    scanf("%d", &x);
    head = Insert_front(head,x);
    Print(head);
  }
}
