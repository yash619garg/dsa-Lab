// Write a function to reverse a single linked list in - place.Implement an iterative solution to reverse the list.
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

struct node *reverseLL(struct node *head)
{
    struct node *ptr = NULL;
    while (head != NULL)
    {
        insertElementInBeginning(&ptr, head->data);
        head = head->next;
    }
    return ptr;
}
int main(int argc, char const *argv[])
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *forth = (struct node *)malloc(sizeof(struct node));

    head->data = 12;
    head->next = second;

    second->data = 26;
    second->next = third;

    third->data = 18;
    third->next = forth;

    forth->data = 9;
    forth->next = NULL;

    head = reverseLL(head);
    displayLL(head);
    return 0;
}