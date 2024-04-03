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

// void UniqueVal(int a[], int size)
// {
//     int count = 0;
//     int index = 0;
//     for (int i = 0; i < size; i++)
//     {
//         if (a[index] == a[i + 1])
//         {
//             count++;
//             for (int j = index; j < size; j++)
//             {
//                 a[j] = a[j + 1];
//             }

//         }
//         else
//         {
//             for (int j = index; j < size; j++)
//             {
//                 a[j] = a[j + 1];
//             }
//             index++;
//         }
//     }
//     cout << "hello";
//     for (int i = 0; i < size - count; i++)
//     {
//         cout << a[i] << " ";
//     }
// }

void UniqueVal(int a[], int size)
{
    int count = 0;
    int index = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = index; j < size; j++)
        {
            a[j] = a[j + 1];
        }

        if (a[index] != a[i + 1])
        {

            index++;
        }
        else
        {
            count++;
        }
    }
    for (int i = 0; i < size - count; i++)
    {
        cout << a[i] << " ";
    }
}

int main(int argc, char const *argv[])
{
    int a[] = {1, 2, 3, 4, 5, 3, 6, 1, 2, 1, 1, 5, 4, 6};
    sort(a, 14);
    cout << endl;
    UniqueVal(a, 14);
    return 0;
}
