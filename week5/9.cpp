// Write a program to check if the list is in non - decreasing order or not .

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

bool isIncreasing(struct node *head)
{
    struct node *ptr1 = head;
    struct node *ptr2 = ptr1->next;

    while (ptr1 != NULL)
    {
        ptr2 = ptr1->next;
        while (ptr2 != NULL)
        {
            if (ptr2->data < ptr1->data)
            {
                return false;
            }
            ptr2 = ptr2->next;
        }
        ptr1 = ptr1->next;
    }
    return true;
}

int main(int argc, char const *argv[])
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *forth = (struct node *)malloc(sizeof(struct node));

    head->data = 12;
    head->next = second;

    second->data = 15;
    second->next = third;

    third->data = 18;
    third->next = forth;

    forth->data = 20;
    forth->next = NULL;

    bool Increasing = isIncreasing(head);
    if (Increasing)
    {
        cout << "linked list is non decreasing" << endl;
    }
    else
    {
        cout << "linked list is not non decreasing" << endl;
    }

    return 0;
}