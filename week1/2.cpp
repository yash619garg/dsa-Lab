#include <iostream>
using namespace std;

void leftShift(int a[], int size)
{
    for (int j = 0; j < size; j++)
    {
        a[j] = a[j + 1];
    }
    a[size - 1] = 0;
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 6;
    leftShift(arr, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}