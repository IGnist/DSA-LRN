#include<iostream>
using namespace std;

void merge(int arr[],int s,int n){
    int mid=s+(n-s)/2;
    int len1=mid-s+1;
    int len2=n-mid; 

    int* first=new int[len1];
    int* second=new int[len2];

    int k=s;
    for(int i=0;i<len1;i++){
        first[i]=arr[k++];
    }
    k=mid+1;
    for(int i=0;i<len2;i++){
        second[i]=arr[k++];
    }
    int index1=0;
    int index2=0;
    k=s;
    
    while(index1<len1 && index2<len2){
        if(first[index1]<second[index2]){
            arr[k++]=first[index1++];
        }
        else{
            arr[k++]=second[index2++];
        }
    }
    while(index1<len1 ){
          arr[k++]=first[index1++];
    }
    while(index2<len2){
        arr[k++]=second[index2++];
    }
}
void merre(int arr[],int s,int n){
if(s>=n){
    return ;
}



if(s<n){
int mid= s+(n-s)/2;
merre(arr,s,mid);
merre(arr,mid+1,n);
merge(arr,s,n);
}
}
int main(){
    int arr[18]={15,18,25,98,78,151,584,87,36584,7845,98,58,32,78,4,3,1,2};
    int n=18;
    int s=0;
    merre(arr,s,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<n;
    return 0;
}