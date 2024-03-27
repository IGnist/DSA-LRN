#include <iostream>
using namespace std;

int quick(int arr[], int s, int n)
{
    int pivot = arr[s];
    int ele = 0;
    for (int i = s + 1; i <= n; i++)
    {
        if (arr[i] <= pivot)
            ele++;
    }
    int pivotindex = s + ele;
    swap(arr[pivotindex], arr[s]);
    int i = s, j = n;
    while (i < pivotindex && j > pivotindex)
    {
        while (arr[i] <= pivot)  // Corrected condition here
        {
            i++;
        }
        while (arr[j] > pivot)
        {
            j--;
        }
        if (i < pivotindex && j > pivotindex)
        {
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotindex;
}

void quicksort(int arr[], int s, int n)
{
    if (s >= n)
    {
        return;
    }
    int P = quick(arr, s, n);
    quicksort(arr, s, P - 1);
    quicksort(arr, P + 1, n);
}

int main()
{
    int arr[8] = {98, 58, 32, 78, 4, 3, 1, 2};
    int n = 8;
    int s = 0;
    quicksort(arr, s, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
