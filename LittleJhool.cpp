#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i = 0, flag = 0;
    string str;
    cin >> str;
    int size = str.length();
    while ( size != 0)
    {
        if(str.substr(i, 6) == "000000" || str.substr(i, 6) == "111111")
        {
            flag = 1;
            break;
        }
        size--;
        i++;
    }
    if(flag)
    {
        cout << "Sorry, sorry!";
    }
    else
    {
        cout << "Good luck!";
    }
    return 0;
}