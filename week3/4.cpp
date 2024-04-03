// implement the selection sort algorithm to sort an array of integers in ascending order.Modify the selection sort implementation to find the kth smallest element in an array.

#include <iostream>
using namespace std;
void swap(int *a, int *b)
{

    int temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    cout << endl;
}

void selectionSortSmallest(int *A, int n, int k)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (A[j] < A[minIndex])
            {
                minIndex = j;
            }
        }
        swap(&A[i], &A[minIndex]);
        if (i + 1 == k)
        {
            cout << A[i] << endl;
        }
    }
}

int main(int argc, char const *argv[])
{
    int A[] = {6, 3, 2, 8, 4, 1, 9};
    int n = 7;
    selectionSortSmallest(A, 7, 6);
    // printArray(A, 7);
    return 0;
}