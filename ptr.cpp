#include<iostream>
using namespace std;
void update(int n){
    n++;
    }
void update2(int& n){
    n++;
    }
int sum(int *arr,int n){
    int total=0;
    for(int i=0;i<n;i++)
    {
        total=total+arr[i];

    }
    return total;
}
int main(){
    /*
    int i=0;
    int &y=i;
    y=y+ 15;
    cout<<y<<" "<< i;

int n=0;
cout<<"before  any updation: "<<n<<endl;
update2(n);
cout<<"After Updating: "<<n;


int n;
cin>>n;
int* arr=new int[n];
cout<<"Enter values"<<endl;
for(int i=0;i<n;i++)
{
    
    cin>>arr[i];
}
int total=sum(arr,n);
cout<<"Sum is :"<<endl<<total;
*/
int row;
cout<<"Enter the value of row:";
cin>>row;
int colm;
cout<<"Enter the value of column:";
cin>>colm;
int** arr=new int*[row];


for(int i=0;i<row;i++){
    arr[i]=new int[colm];
}
for(int i=0;i<row;i++){
    for(int j=0;j<colm;j++){
    cout<<"Enter values:";
    cin>>arr[i][j];
    }
}
cout<<"Your values are:"<<endl;
for(int i=0;i<row;i++){
    for(int j=0;j<colm;j++){
    cout<<arr[i][j];
    }
     cout<<endl; 
}
return 0;
}