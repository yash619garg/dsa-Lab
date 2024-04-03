// Implement the counting sort algorithm to sort an array of positive integers in ascending order.Also, the counting sort implementation should be modified to sort an array of characters in lexicographical order.Test the implementation with various strings and verify its correctness.

#include <iostream>
using namespace std;

int findMax(int *A, int n)
{

    int max = A[0];
    for (int i = 0; i < n; i++)
    {
        if (A[i] > max)
        {
            max = A[i];
        }
    }
    return max;
}

void countSort(int *A, int n)
{
    int max = findMax(A, n);
    int count[max];
    for (int i = 0; i < max; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        count[A[i]]++;
    }

    for (int i = 0; i < max; i++)
    {
       
        
    }
    
    for (int i = 0; i < max; i++)
    {
        cout << count[i];
    }
}

int main(int argc, char const *argv[])
{
    int A[] = {7, 9, 3, 2, 7, 5, 11, 9, 0};
    countSort(A, 9);

    return 0;
}