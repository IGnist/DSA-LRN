#include<iostream>
using namespace std;
void solve(int n,int **arr){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            arr[i][j]=0;
        }
    }

}
int main(){
    int n;
    cin>>n;
    int **arr=new int *[n];
    for(int  i=0;i<n;i++){
        arr[i]=new int [n];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    solve(n,arr);
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    for(int i = 0; i < n; i++) {
        delete[] arr[i];
    }3
    delete[] arr;
    return 0;
}