// Implement the insertion sort algorithm to sort an array of integers in ascending order.Modify the insertion sort implementation to sort an array of students’ structures[Problem statement 6 of Week 1] in lexicographical order(dictionary or alphabetical order) of student names.

#include <iostream>
using namespace std;

struct student
{
    string name;
    int age;
    string branch;
};

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << " ";
    }

    cout << endl;
}

void printStruct(struct student *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i].name << " ";
    }

    cout << endl;
}

void integerInsertionSort(int *A, int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = A[i], j = i - 1;
        while (j >= 0 && A[j] > key)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }
}

void structInsertionSort(struct student S[], int n)
{
    for (int i = 1; i < n; i++)
    {
        struct student key = S[i];
        int j = i - 1;
        while (j >= 0 && S[j].name > key.name)
        {
            S[j + 1] = S[j];
            j--;
        }
        S[j + 1] = key;
    }
}

int main(int argc, char const *argv[])
{
    // for integer array
    int a[] = {6, 4, 2, 9, 5, 1, 2, 0};
    int n = 8;
    printArray(a, n); // b4 sorting
    integerInsertionSort(a, n);
    printArray(a, n); // after sorting

    // student
    struct student s[3];
    s[0].name = "yash";
    s[0].age = 21;
    s[0].branch = "cse";

    s[1].name = "sadiq";
    s[1].age = 20;
    s[1].branch = "cse";

    s[2].name = "vansh";
    s[2].age = 19;
    s[2].branch = "it";

    printStruct(s, 3);
    structInsertionSort(s, 3);
    printStruct(s, 3);

    return 0;
}