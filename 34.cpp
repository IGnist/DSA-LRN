#include <iostream>
using namespace std;
void rcc(int src, int dest)
{
    cout << "source:" << src 
         << "destination:" << dest << endl;
    // base case
    if (src == dest)
    {
        cout << "destination reached";
        return ;
    }
    cout << "source:" << src << endl
         << "destination:" << dest << endl;
    src++; 
    // recc
    rcc(src, dest);

}
int main()
{
    int src = 1;
    int dest = 10;
    rcc(src, dest);
    cout << endl;
    return 0;
}