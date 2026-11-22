#include <iostream>
using namespace std;

// Function template for Bubble Sort
template <class T>
void sort(T arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;}

int main()
{
    int a[] = {50, 20, 40, 10, 30};
    float b[] = {5.5, 2.2, 4.4, 1.1, 3.3};

    int n1 = 5, n2 = 5;

    cout << "Integer array:" << endl;
    sort(a, n1);

    cout << "\nFloat array:" << endl;
    sort(b, n2);

    return 0;
}