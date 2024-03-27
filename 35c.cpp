#include <iostream>
using namespace std;
int power(int i, int j)
{
    if (j == 0)
    {
        return 1;
    }
    if (j == 1)
    {
        return i;
    }

    int temp = power(i, j / 2);
    int ans=temp*temp;

    if (j % 2 == 0)
    {
        return ans ;
    }
    else
    {
        return i * an;
    }
}
int main()
{
    int i, j;
    cout<<"Enter the input:";
    cin >> i;
    cout<<"Enter the inputs:";
    cin>>j;
    int k = power(i, j);
    cout << "answer is " << k;
    return 0;
}