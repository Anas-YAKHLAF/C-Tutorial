#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
struct Node
{
    int data;
    struct Node *next;
};
// Function to insert a node at the beginning
void insertAtBeginning(struct Node **head, int data)
{
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}
// Function to print the linked list
void printList(struct Node *head)
{
    struct Node *current = head;
    while (current != NULL)
    {
        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}
int main()
{
    struct Node *head = NULL; // Start with an empty list

    // Insert elements
    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 1);

    // Print the linked list
    printf("Linked List: ");
    printList(head);

    // Free memory (not shown here for simplicity)
    return 0;
}