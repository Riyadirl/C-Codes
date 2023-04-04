#include<stdio.h>
#include<stdlib.h>
struct ListNode
{
    int value;
    ListNode* next;
};

ListNode* head = NULL;
ListNode* tail = NULL;

ListNode* createListNode(int data)
{
    ListNode* temp = (ListNode *)malloc(sizeof(ListNode));
    temp->value = data;
    temp->next = NULL;
    return temp;
}

void add(int data)
{
    if(head==NULL)
    {
        head = createListNode(data);
        tail = head;
    }
    else
    {
        ListNode* temp = createListNode(data);
        tail->next = temp;
        tail = tail->next;
    }
}

void printList()
{
    for(ListNode* i = head; i!=NULL; i = i->next)
    {
        printf("%d ", i->value);
    }
    printf("\n");
}

ListNode* Search(int data)
{
    for(ListNode* i=head; i!=NULL; i=i->next)
    {
        if(i->value == data)
            return i;
    }
    return NULL;
}

void InsertFirst(int data)
{
     temp -> next=head;
     head= temp;
     temp= NULL;
     listNode* head = NULL;
     *tail =NULL;
}

void InsertLast(int data)
{
struct node *newNode, *temp;

    newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode == NULL)
    {
        printf("Unable.");
    }
    else
    {
        newNode->data = data;
        newNode->next = NULL; 

        temp = head;

    
        while(temp != NULL && temp->next != NULL)
            temp = temp->next;

        temp->next = newNode; 
}

void InsertMiddle(int data, int insertAfter)
{
struct node *newNode, *temp;

    newNode = (struct node*)malloc(sizeof(struct node));

    if(newNode == NULL)
    {
        printf("Unable");
    }
    else
    {
        newNode->data = data; 
        newNode->next = NULL;

        temp = head;
}

void DeleteFirst()
{
    listNode * temp= head;
    head = head -> next ;
    free(temp);
}

void DeleteLast(struct node **head)
{
struct node *prev = NULL, *cur = NULL;

  
  if(head == NULL || *head == NULL) return;
  
  
  if((*head)->next == NULL) {
    free(*head);
    *head = NULL;
  }
  
  prev = *head;
  cur = prev->next;
  
  while(cur->next) {
    prev = prev->next;
    cur = cur->next;
  }
  
  prev->next = NULL;
  free(cur);
}

void DeleteMiddle(int data)
{
linkedList *temp;
        if (data->next == NULL || data == NULL)
                return false;
        temp = data->next;
        data->data = temp->data;
        data->next = temp->next;
        return true;
}

int main()
{
    for(int i=1;i<=10;i++)
    {
        add(i);
    }
    printList();

    return 0;
}