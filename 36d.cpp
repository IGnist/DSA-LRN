#include <iostream>
using namespace std;
void sort(int * arr,int s)
{
    if(s==0 ||s==1){
        return ;
    }
    for(int i=0;i<s-1;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }
    sort(arr,s-1);
   
}
int main()
{
    int arr[6]={9,7,8,23,54,54};
    sort(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}