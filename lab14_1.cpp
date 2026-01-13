#include <iostream>
using namespace std;

template <typename T>
void insertionSort(T a[], int n)
{
    for (int i = 1; i < n; i++)
    {
        T key = a[i];
        int j = i - 1;

        while (j >= 0 && a[j] < key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;

        cout << "Pass " << i << ":";
        for (int k = 0; k < n; k++)
            cout << a[k] << " ";
        cout << "\n";
    }
}

