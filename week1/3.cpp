#include <iostream>
using namespace std;

void rightShift(int a[], int size, int noShift)
{
    for (int i = 0; i < noShift; i++)
    {
        int temp = a[size - 1];
        for (int j = 0; j < size - 1; j++)
        {
            a[size - 1 - j] = a[size - j - 2];
        }
        a[0] = temp;
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = 6;
    rightShift(arr, 6, 2);
    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
