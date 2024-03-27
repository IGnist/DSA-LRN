#include <iostream>
using namespace std;
bool palindrone(string &str, int i, int j)
{
    if (i > j)
        return true;

    if (str[i] != str[j])
        return false;

    else
    {
        return palindrone(str, ++i, --j);
    }
}
int main()
{
    string str = "sannas";
    int sz = str.length() - 1;
    bool j = palindrone(str, 0, sz);
    if (j == true)
    {
        cout << "palindrone";
    }
    else
    {
        cout << "not a palindrone";
    }
    return 0;
}