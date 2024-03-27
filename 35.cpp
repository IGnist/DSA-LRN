#include<iostream>
using namespace std;
void funcall(int n,string arr[]){
    if (n==0)
    return ;

    int digit = n % 10;
    n= n / 10;
    

    funcall(n,arr);
    cout<<arr[digit];
}
int main(){
    int n;
    cout<<"Enter the Digit:"<<endl;
    cin>>n;
    string arr[10]={"ZERO","ONE","TWO","THREE","FOUR","FIVE",
                    "SIX","SEVEN","EIGHT","NINE"};
    funcall(n,arr);
    return 0;
}