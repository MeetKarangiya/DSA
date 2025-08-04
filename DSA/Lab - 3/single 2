#include <stdio.h>
#include <stdlib.h> // Header File for malloc(),calloc(),realloc()

struct node // Structure for the nodes we create
{
    int data;
    struct node *next;
};

struct node *head = NULL;                   
struct node *CreateNode(int value);           
void InsertAtBeg(int value);                 
void InsertAtEnd(int value);                  
void InsertAfterNode(int value, int after);   
void InsertBeforeNode(int value, int before); 
void DeleteFromBeg();                         
void DeleteFromEnd();                         
void Display();                             

int main()
{
    int choice = 0, value, after, before;
    while (choice != 8)
    {
        printf("\n\n************ MAIN MENU (C) ************");
        printf("\n1 : Add a node at Beginning");
        printf("\n2 : Add a node at the End");
        printf("\n3 : Add a node after a Node");
        printf("\n4 : Add a node before a node");
        printf("\n5 : Delete a node from the Beginning");
        printf("\n6 : Delete a node from the End");
        printf("\n7 : Display the Linked List");
        printf("\n8 : END the Operation !!!");
        printf("\n\nEnter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1: 
            scanf("%d", &value);
            InsertAtBeg(value);
            printf("\nNode Added at the beginning.");
            break;

        case 2: /
            printf("Enter Value to Add : ");
            scanf("%d", &value);
            InsertAtEnd(value);
            printf("\nNode Added at the end.");
            break;

        case 3: 
            printf("Enter Value to Add : ");
            scanf("%d", &value);
            printf("Enter the Value of node coming before the new node : ");
            scanf("%d", &after);
            InsertAfterNode(value, after);
            printf("\nNode Added after the Node having value %d.", after);
            break;

        case 4:
            printf("Enter Value to Add : ");
            scanf("%d", &value);
            printf("Enter the Value of node coming after the new node : ");
            scanf("%d", &before);
            InsertBeforeNode(value, before);
            printf("\nNode Added before the Node having value %d.", before);
            break;

        case 5: 
            DeleteFromBeg();
            printf("\nNode Deleted from the Beginning.");
            break;

        case 6:
            DeleteFromEnd();
            printf("\nNode Deleted from the End.");
            break;

        case 7: 
            printf("\nLinked List: ");
            Display();
            break;

        case 8: 
            printf("\nExit !!!");
            break;

        default:
            printf("\nInvalid option. Try again.");
            break;
        }
    }
    return 0;
}

struct node *CreateNode(int value) /
{
    struct node *newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void InsertAtBeg(int value) 
    struct node *new_node = CreateNode(value);
    new_node->next = head;
    head = new_node;
}

void InsertAtEnd(int value) 
{
    struct node *new_node = CreateNode(value);

    if (head == NULL)
    {
        head = new_node;
    }
    else
    {
        struct node *ptr = head;
        while (ptr->next != NULL)
        {
            ptr = ptr->next;
        }
        ptr->next = new_node;
    }
}

void InsertAfterNode(int value, int after) //
{
    struct node *new_node = CreateNode(value);
    if (head == NULL)
    {
        head = new_node;
    }
    else
    {
        struct node *ptr = head;
        while (ptr != NULL && ptr->data != after)
        {
            ptr = ptr->next;
        }
        new_node->next = ptr->next;
        ptr->next = new_node;
    }
}

void InsertBeforeNode(int value, int before) 
{
    struct node *new_node = CreateNode(value);
    if (head == NULL)
    {
        head = new_node;
    }
    else if (head->data == before)
    {
        new_node->next = head;
        head = new_node;
    }
    else
    {
        struct node *ptr = head;
        while (ptr->next != NULL && ptr->next->data != before)
        {
            ptr = ptr->next;
        }
        new_node->next = ptr->next;
        ptr->next = new_node;
    }
}

void DeleteFromBeg() /
{
    if (head == NULL)
    {
        printf("\nEmpty List !!!");
        return;
    }
    struct node *ptr = head;
    head = head->next;
    free(ptr);
}

void DeleteFromEnd() /
{
    if (head == NULL)
    {
        printf("\nEmpty List !!!");
        return;
    }
    struct node *ptr = head;
    while (ptr->next->next != NULL)
    {
        ptr = ptr->next;
    }
    free(ptr->next);
    ptr->next = NULL;
}

void Display() /
{
    int count = 0; 
    struct node *ptr = head;
    if (ptr == NULL)
    {
        printf("List is empty.\n");
        return;
    }
    while (ptr != NULL)
    {
        printf("%d -> ", ptr->data);
        count++; /
        ptr = ptr->next;
    }
    printf("END\n");
    printf("Total number of nodes : %d", count);
}
