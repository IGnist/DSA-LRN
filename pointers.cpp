#include<iostream>
using namespace std;
int main()
{

    int a[10]={0};
    int *ptr=a;
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(&a)<<endl;

}