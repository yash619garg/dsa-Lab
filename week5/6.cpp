// write a function to find the intersection of two singly linked lists.If the lists do not intersect,return null.

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

void insertElementInBeginning(struct node **head, int value)
{
    struct node *temp = (struct node *)malloc(sizeof(struct node));
    temp->data = value;
    temp->next = *head;
    *head = temp;
}

struct node *intersectionLL(struct node *head1, struct node *head2)
{
    struct node *temp3 = NULL;
    struct node *temp = head2;
    while (head1 != NULL)
    {
        head2 = temp;
        while (head2 != NULL)
        {
            if (head1->data == head2->data)
            {
                insertElementInBeginning(&temp3, head2->data);
            }
            head2 = head2->next;
        }
        head1 = head1->next;
    }

    return temp3;
}

int main(int argc, char const *argv[])
{
    struct node *head = (struct node *)malloc(sizeof(struct node));
    struct node *second = (struct node *)malloc(sizeof(struct node));
    struct node *third = (struct node *)malloc(sizeof(struct node));
    struct node *forth = (struct node *)malloc(sizeof(struct node));
    struct node *fifth = (struct node *)malloc(sizeof(struct node));

    struct node *head2 = (struct node *)malloc(sizeof(struct node));
    struct node *second2 = (struct node *)malloc(sizeof(struct node));
    struct node *third2 = (struct node *)malloc(sizeof(struct node));
    struct node *forth2 = (struct node *)malloc(sizeof(struct node));
    struct node *fifth2 = (struct node *)malloc(sizeof(struct node));

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

    head2->data = 12;
    head2->next = second2;

    second2->data = 6;
    second2->next = third2;

    third2->data = 18; //
    third2->next = forth2;

    forth2->data = 2;
    forth2->next = NULL;

    struct node *intersection = (struct node *)malloc(sizeof(struct node));

    intersection = intersectionLL(head, head2);
    // cout << intersection;
    displayLL(intersection);

    // int mid = middleElement(head);
    // cout << mid << endl;

    return 0;
}