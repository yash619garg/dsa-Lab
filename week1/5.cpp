#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a[] = {1, 2, 3, 4, 5, 6, 7};
    int size = 7;

    for (int i = 0; i < size / 2; i++)
    {
        int temp = a[i];
        a[i] = a[size - i - 1];
        a[size - 1 - i] = temp;
    }

    for (int i = 0; i < size; i++)
    {
        cout << a[i] << " ";
    }

    return 0;
}
