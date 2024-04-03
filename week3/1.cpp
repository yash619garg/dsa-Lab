// implement the generic bubble sort algorithm to sort an array of elements in ascending order.Modify the bubble sort implementation to count the number of swaps made during the sorting process.Print the total number of swaps after sorting the array.

#include <iostream>
using namespace std;

void swap(int *a, int *b)
{

    int temp = *a;
    *a = *b;
    *b = *a;
}

void bubbleSort(int *A, int n)
{
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (A[j] > A[j + 1])
            {
                swap(A[j], A[j + 1]);
                count++;
            }
        }
    }

    cout << "there are total " << count << " swaps" << endl;
}
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    cout << endl;
}

int main(int argc, char const *argv[])
{
    int a[] = {6, 4, 2, 9, 5, 1, 2, 0};
    int n = 8;
    printArray(a, n); // b4 sorting
    bubbleSort(a, n);
    printArray(a, n); // after sorting
    return 0;
}