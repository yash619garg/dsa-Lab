// Write a function to remove the nth node from the end of a single linked list and return the head of the modified list.
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

int sizeOfLL(struct node *head)
{
    int count = 0;
    while (head != NULL)
    {
        count++;
        head = head->next;
    }
    return count;
}

struct node *removeFromEnd(struct node *head, int n)
{
    int size = sizeOfLL(head);
    struct node *temp = head;
    for (int i = 1; i < size - n; i++)
    {
        temp = temp->next;
    }
    struct node *temp2 = temp->next;
    temp->next = temp->next->next;
    free(temp2);
    return head;
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

    third->data = 18; //
    third->next = forth;

    forth->data = 9;
    forth->next = NULL;

    // int size = sizeOfLL(head);
    // cout << size;

    head = removeFromEnd(head, 2);
    displayLL(head);

    return 0;
}
