// Write a function to find the middle node of a single linked list.If the list contains an even number of nodes, return the second middle node.

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

int middleElement(struct node *head)
{
    int size = sizeOfLL(head);
    struct node *temp = head;
    for (int i = 1; i < (size / 2) + 1; i++)
    {
        temp = temp->next;
    }

    return temp->data;
}

int main(int argc, char const *argv[])
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *forth = (struct node *)malloc(sizeof(struct node));
    struct node *fifth = (struct node *)malloc(sizeof(struct node));

    head->data = 12;
    head->next = second;

    second->data = 26;
    second->next = third;

    third->data = 18; //
    third->next = forth;

    forth->data = 9;
    forth->next = fifth;

    fifth->data = 33;
    fifth->next = NULL;

    int mid = middleElement(head);
    cout << mid << endl;

    return 0;
}
