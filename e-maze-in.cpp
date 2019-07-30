#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    int X = 0, Y = 0;
    cin >> str;
    for(int i = 0; i != str.length(); i++)
    {
        if( str[i] == 'L')
        {
            X = X - 1;
        }
        else if(str[i] == 'R')
        {
            X = X + 1;
        }
        else if(str[i] == 'U')
        {
            Y = Y + 1;
        }
        else if(str[i] == 'D')
        {
            Y = Y - 1;
        }
    }
    cout << X << " " << Y;
    return 0;
}