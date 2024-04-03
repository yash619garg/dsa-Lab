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

void selectionSort(int *A, int n)
{
    int swapC = 0;
    int comp = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int count = 0;
        int minIndex = i;
        for (int j = i; j < n; j++)
        {
            comp++;
            if (A[j] < A[minIndex])
            {
                minIndex = j;
                count++;
            }
        }
        if (count == 0)
        {
            break;
        }
        else
        {
            swap(&A[i], &A[minIndex]);
            swapC++;
        }
    }
    cout << swapC;
    cout << comp;
}

int main(int argc, char const *argv[])
{

    int A[] = {7, 9, 3, 2, 7, 5, 1, 9, 0};
    int B[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    selectionSort(B, 9);
    printArray(B, 9);

    return 0;
}