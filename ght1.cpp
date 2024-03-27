#include <iostream>
using namespace std;

void sort(int *arr, int siz)
{
    if (siz == 0)
    {
        return;
    }

    for (int i = 1; i < siz; i++)
    {
        if (arr[i] < arr[0])
        {
            swap(arr[0], arr[i]);
        }
    }

    sort(arr + 1, siz - 1);
}

int main()
{
    int arr[6] = {11, 7, 2, 9, 84, 6};
    sort(arr, 6);

    for (int i = 0; i < 6; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
