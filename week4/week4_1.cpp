// Implement the Merge Sort algorithm as a function that takes an array of integers and sorts it.
#include <iostream>
using namespace std;
int count = 0;

void mergeArray(int a[], int p, int q, int r)
{
    int n1 = q - p + 1;
    int n2 = r - q;
    int b[n1];
    int c[n2];
    int i = 0;
    int j = 0;
    while (i < n1)
    {
        b[i] = a[p];
        i++;
        p = p + i;
    }
    while (j < n2)
    {
        c[j] = a[q + 1];
        j++;
        q = q + j;
    }
    
}
void mergeSort(int a[], int p, int r)
{
    int q = (p + r) / 2;
    if (p < r)
    {
        mergeSort(a, p, q);
        mergeSort(a, q + 1, r);
        mergeArray(a, p, q, r);
    }
    return;
}

int main(int argc, char const *argv[])
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    mergeSort(a, 0, 6);
    for (int i = 0; i < 7; i++)
    {
        cout << a[i];
    }

    return 0;
}