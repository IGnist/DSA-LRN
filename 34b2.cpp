#include<iostream>
using namespace std;
int sum(int arr[],int size){
    int sum2;
    if(size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }
    else
    {
    sum2= sum(arr+1,size-1);   
    return arr[0]+sum2;
    }
}
int main(){
    int sum2;
    int arr[5]={2,5,85,6,8};
    sum2=sum(arr,5);
    cout<<"Sum="<<sum2;
    return 0;

}