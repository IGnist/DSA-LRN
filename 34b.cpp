#include<iostream>
using namespace std;
int sum(int arr[],int size){
    if(size==0){
        return 0;
    }
    else
    {
    return arr[0]+sum(arr+1,size-1);
    }
}
int main(){
    int sum2;
    int arr[5]={2,5,85,6,8};
    sum2=sum(arr,5);
    cout<<"Sum="<<sum2;
    return 0;

}