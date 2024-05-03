#include <stdio.h>
#include <stdlib.h>

// Create the struct type
struct Node
{
    int data;
    struct Node *next;
};

// Allocate memory for nodes in linked list
struct Node *createNode(int value)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    if (newNode == NULL)
    {
        return NULL;
    };
    newNode->data = value;
    newNode->next = NULL;
};

int main()
{
    struct Node *head = NULL;
    struct Node *newNode = createNode(10);
    if (newNode != NULL)
    {
        newNode->next = head;
        head = newNode;
    };
    printf("Hello world");
};