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

int main()
{
    int a[10] = {12,25,30,44,2,0,4,7,55,25};

    cout << "Input Array:";
    for (int i = 0; i < 10; i++) cout << a[i] << " ";
    cout << "\n\n";

    insertionSort(a, 10);

    cout << "\nSorted Array:";
    for (int i = 0; i < 10; i++) cout << a[i] << " ";
    cout << "\n";

    return 0;
}
