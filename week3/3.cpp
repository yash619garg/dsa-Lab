// Modify the insertion sort implementation to employ binary search to find the correct position of the element to be placed in the sorted subarray to decrease the #of comparisons required.Run the native and modified insertion sort on the same inputs and assess the performance of the modified algorithm under different data distributions.

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

int binarySearch(int *A, int p, int r, int key)
{
    int mid = (p + r) / 2;
    if (p > r)
    {
        return p;
    }
    else if (A[mid] < key)
    {
        return binarySearch(A, mid + 1, r, key);
    }
    else if (A[mid] > key)
    {
        return binarySearch(A, p, mid - 1, key);
    }
    else if (A[mid] == key)
    {
        return mid;
    }
}

void binaryInsertionSort(int *A, int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = A[i];
        int j = i - 1;
        int mid = binarySearch(A, 0, j, key);
        for (int k = j; k >= mid; k--)
        {
            A[k + 1] = A[k];
        }
        A[mid] = key;
    }
}

int main(int argc, char const *argv[])
{
    int a[] = {1, 7, 4, 1, 3, 6, 5, 2};
    binaryInsertionSort(a, 8);
    printArray(a, 8);

    return 0;
}