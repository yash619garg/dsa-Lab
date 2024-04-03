#include <iostream>
using namespace std;

void sort(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int smallest(int arr[], int pos)
{
    return arr[pos - 1];
}

int greatest(int arr[], int pos, int size)
{
    return arr[size - pos];
}

int main(int argc, char const *argv[])
{
    int a[6] = {1, 5, 4, 3, 2, 7};
    sort(a, 6);
    for (int i = 0; i < 6; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    int great = greatest(a, 6, 6);
    cout << "greatest : " << great << endl;

    int small = smallest(a, 6);
    cout << "smallest : " << small << endl;
    return 0;
}
