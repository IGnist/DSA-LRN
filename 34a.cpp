#include <iostream>
using namespace std;
bool sorting(int arr[], int n)
{
    if (n == 0 || n == 1)
        return true;
    else if (arr[1] < arr[0])
        return false;
    else{
        bool abs = sorting(arr + 1, n - 1);
        return abs;    }

}

int main()
{
    int arr[9] = {4, 67, 32, 5, 56, 76, 34, 28, 90}; 
    bool ans =  sorting(arr, 9);
    if(ans==true)
    {
        cout<<"array is sorted";
    }
    else
    {
        cout<<"array is not sorted";
    }
    return 0;
}