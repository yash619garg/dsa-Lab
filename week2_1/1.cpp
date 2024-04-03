// 1. Given an unsorted array of elements and a key value, write a function to determine if the key exists in the array.
#include <iostream>
using namespace std;

bool findValue(int a[], int key, int size)
{
    for (int i = 0; i < size; i++)
    {
        if (a[i] == key)
        {
            return true;
        }
    }
    return false;
}

int main(int argc, char const *argv[])
{
    int a[] = {1, 3, 6, 2, 8, 3, 5};
    if (findValue(a, 4, 7))
    {
        cout << "key is present in the array";
    }
    else
    {
        cout << "key is not present in the array";
    }

    return 0;
}