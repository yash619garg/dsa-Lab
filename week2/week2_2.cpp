#include <iostream>
using namespace std;

// void sort(int a[], int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         for (int j = i + 1; j < size; j++)
//         {
//             if (a[i] > a[j])
//             {
//                 int temp = a[i];
//                 a[i] = a[j];
//                 a[j] = temp;
//             }
//         }
//     }

//     for (int i = 0; i < size; i++)
//     {
//         cout << a[i] << " ";
//     }
// }

void dropElement(int a[], int size, int num)
{
    int count = 0;
    for (int i = 0; i < size; i++)
    {
        if (a[i] == num)
        {
            count++;
            for (int j = i; j < size; j++)
            {
                a[j] = a[j + 1];
            }
        }
    }

    for (int i = 0; i < size - count; i++)
    {
        cout << a[i] << " ";
    }
}

int main(int argc, char const *argv[])
{
    int a[] = {1, 2, 3, 4, 5, 3, 6};
    // sort(a, 14);
    // mode(a, 14);
    dropElement(a, 7, 3);
    return 0;
}
