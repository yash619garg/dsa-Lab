// Write a program to create a single linked list. Include methods to insert elements at the
// beginning, end, a specific position of the list, and a specific element of the list, delete
// elements, search for a value, and display the contents of the list.

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

void insertElementInEnd(struct node *head, int value)
{
    struct node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    struct node *temp2 = (struct node *)malloc(sizeof(struct node));
    temp->next = temp2;
    temp2->data = value;
    temp2->next = NULL;
}

void insertElementInBeginning(struct node **head, int value)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = value;
    temp->next = *head;
    *head = temp;
}

void insertInMiddle(struct node *head, int value, int position)
{
    for (int i = 1; i < position - 1; i++)
    {
        if (head->next->next == NULL)
        {
            cout << "Out of range" << endl;
            return;
        }
        head = head->next;
    }
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = value;
    temp->next = head->next->next;
    head->next = temp;
}

void insertAfterData(struct node *head, int value, int givenValue)
{
    while (head->data != givenValue)
    {
        if (head->next == NULL)
        {
            cout << "given element not present" << endl;
            return;
        }
        head = head->next;
    }
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = value;
    temp->next = head->next;
    head->next = temp;
}

void deleteElementByData(struct node *head, int value)
{
    while (head->next->data != value)
    {
        if (head->next == NULL)
        {
            cout << "given element not present" << endl;
            return;
        }
        head = head->next;
    }
    struct node *temp = head->next;
    head->next = head->next->next;
    free(temp);
}

void deleteElementByPosition(struct node *head, int position)
{
    for (int i = 1; i < position - 1; i++)
    {
        if (head->next->next == NULL)
        {
            cout << "Out of range" << endl;
            return;
        }

        head = head->next;
    }
    struct node *temp = head->next;
    head->next = head->next->next;
    free(temp);
}

void searchValue(struct node *head, int position)
{
    for (int i = 1; i < position; i++)
    {
        if (head->next == NULL)
        {
            cout << "element not present";
            return;
        }
        head = head->next;
    }
    cout << head->data << endl;
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

    insertElementInEnd(head, 56);
    insertElementInBeginning(&head, 49);
    insertInMiddle(head, 65, 4);
    insertAfterData(head, 58, 12);
    deleteElementByData(head, 26);
    deleteElementByPosition(head, 2);
    searchValue(head, 2);

    displayLL(head);

    return 0;
}