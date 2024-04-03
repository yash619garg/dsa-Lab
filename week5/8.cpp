// Define the function moveToFront(struct node *head) to move a last node to the front of a single linked list.
#include <iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
};

void displayLL(struct node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

void insertElementInBeginning(struct node **head, int value)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = value;
    temp->next = *head;
    *head = temp;
}

void moveToFront(struct node **head)
{
    struct node *ptr = *head;
    while (ptr->next->next != NULL)
    {
        ptr = ptr->next;
    }

    insertElementInBeginning(&(*head), ptr->next->data);
    ptr->next = NULL;
}

int main(int argc, char const *argv[])
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *forth = (struct node *)malloc(sizeof(struct node));

    head->data = 12;
    head->next = second;

    second->data = 16;
    second->next = third;

    third->data = 18;
    third->next = forth;

    forth->data = 20;
    forth->next = NULL;

    cout << head << endl;

    // cout << &head << endl;
    // cout << &head->data;

    moveToFront(&head);
    displayLL(head);

    return 0;
}
