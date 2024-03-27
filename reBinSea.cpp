#include <iostream>
using namespace std;
bool binarsearch(int *arr, int s, int e, int key)
{
    int mid = s + (e - s) / 2;

    if (s > e)
        return false;

    if (arr[mid] == key)
        return true;

    if (arr[mid] < key){
        return binarsearch(arr, mid + 1, e, key);
    }

    else{
        return binarsearch(arr, s, mid - 1, key);
    }
}

int main()
{
    int arr[6] = {2, 9, 13, 19, 28, 58};
    int key = 18;
    bool s= binarsearch(arr, 0, 5, 58);
 if(s==1){
    cout<<"element is avaliable";
 }
 else{
    cout<<"element not found";
 }
    return 0;
}