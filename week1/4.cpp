#include <iostream>
using namespace std;

void intersection(int a[], int b[], int s1, int s2)
{
    int s3;
    if (s1 > s2)
    {
        s3 = s1;
    }
    else
    {
        s3 = s2;
    }
    // int *c = new int[s3];
    int c[s3];

    int count = 0;
    for (int i = 0; i < s1; i++)
    {
        for (int j = 0; j < s2; j++)
        {
            if (a[i] == b[j])
            {
                c[count] = a[i];
                count++;
            }
        }
    }

    for (int i = 0; i < count; i++)
    {
        cout << c[i] << " ";
    }
}

int main(int argc, char const *argv[])
{
    int arr1[] = {1, 2, 3, 4, 5, 6};
    int arr2[] = {4, 5, 6, 7, 8};
    int size1 = 6;
    int size2 = 5;

    int s3;
    if (size1 > size2)
    {
        s3 = size1;
    }
    else
    {
        s3 = size2;
    }

    intersection(arr1, arr2, 6, 5);

    return 0;
}
