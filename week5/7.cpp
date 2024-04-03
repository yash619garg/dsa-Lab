// Write an O(n) time function to determine if a single linked list is a palindrome.
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

bool isPalindrome(struct node *head)
{
    struct node *head2 = reverseLL(head);
    while (head != NULL)
    {
        if (head->data != head2->data)
        {
            return false;
        }
        head = head->next;
        head2 = head2->next;
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

    second->data = 26;
    second->next = third;

    third->data = 26;
    third->next = forth;

    forth->data = 12;
    forth->next = NULL;

    if (isPalindrome(head))
    {
        cout << "it is a palindrome";
    }
    else
    {
        cout << "it is not a palindrome";
    }

    return 0;
}