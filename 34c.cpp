#include<iostream>
using namespace std;
bool search(int arr[],int size,int key){
    if(size==0){
        return false;
    }
    if(arr[0]==key){
        return true;
    }
    else{
        bool remaining=search(arr+1,size-1,key);
        return remaining;
    }
    
}
int main(){
    int arr[4]={8,6,4,8};
    int key=15;
    bool res=search(arr,4,key);
    if(res==1){
        cout<<"element found";
    }
    else{
        cout<<"element not found";
    }
    return 0;
}