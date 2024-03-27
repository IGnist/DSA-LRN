#include<iostream>
using namespace std;
void reve(string& str,int i,int j){
    if(i>j)
    return ;
    
    swap(str[i],str[j]);
    i++;
    j--;

    reve(str,i,j);


}
int main(){
    string str="sandeep";
    int sz=str.length()-1;
    reve(str,0,sz);
    cout<<str;
    return 0;
}