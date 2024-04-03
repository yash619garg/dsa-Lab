#include <iostream>
using namespace std;

void sort(int a[], int size)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (a[i] > a[j])
            {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }
}

void mode(int a[], int size)
{
    int count = 0;
    int max = 0;
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] == a[i + 1])
        {
            count++;
        }
        else
        {
            count++;
            if (count > max)
            {
                max = count;
                index = i;
            }
            count = 0;
        }
    }

    cout << a[index] << endl;
    cout << "it occur " << max << " times" << endl;
}

int main(int argc, char const *argv[])
{
    int a[] = {1, 2, 3, 4, 5, 3, 6, 1, 2, 1, 1, 5, 4, 6};
    sort(a, 14);
    mode(a, 14);
    return 0;
}
