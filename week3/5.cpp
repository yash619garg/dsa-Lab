// Compare the performance of bubble, insertion, and selection sort algorithms based on their sorting time and sensitivity to the randomly generated input data distribution.Identify the strengths and weaknesses of each algorithm under different scenarios(i.e., random collection, sorted and reversely sorted).

#include <iostream>
using namespace std;
void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    cout << endl;
}

void swap(int *a, int *b)
{

    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int *A, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (A[j + 1] < A[j])
            {
                swap(&A[j], &A[j + 1]);
            }
        }
    }
}

void selectionSort(int *A, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i; j < n; j++)
        {
            if (A[j] < A[minIndex])
            {
                minIndex = j;
            }
        }
        swap(&A[i], &A[minIndex]);
    }
}

void InsertionSort(int *A, int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = A[i];
        int j = i - 1;
        while (j >= 0 && A[j] > key)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
}

int main(int argc, char const *argv[])
{

    int A[] = {7, 9, 3, 2, 7, 5, 1, 9, 0};
    // bubbleSort(A, 9);
    // InsertionSort(A, 9);
    selectionSort(A, 9);
    printArray(A, 9);

    int B[10000];
    for (int i = 0; i < 10000; i++)
    {
        B[i] = i;
    }
    bubbleSort(B, 10000);
    printArray(B, 10000);

    return 0;
}