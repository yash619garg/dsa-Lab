// Given a sorted array of elements and a key value, write a function to determine if the key exists in the array.
#include <iostream>
using namespace std;

bool findValue(int a[], int start, int end, int key)
{
    int mid = (start + end) / 2;
    if (key == a[mid])
    {
        return true;
    }
    else if (key > a[mid])
    {
        return findValue(a, mid + 1, end, key);
    }
    else if (key < a[end / 2])
    {

        return findValue(a, 0, mid, key);
    }
    else
    {
        return false;
    }
}

int main(int argc, char const *argv[])
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 8};
    if (findValue(a, 0, 7, 7))
    {
        cout << "key is present in the array";
    }
    else
    {
        cout << "key is not present in the array";
    }
    return 0;
}