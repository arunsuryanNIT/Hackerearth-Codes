#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    int i, n;
    cin >> str;
    cin >> n;
    for( i = 0; i != str.length(); i++)
    {
        if(str [i] >= 'a' && str[i] <= 'z')
        {
            str[i] = ((static_cast<int>(str[i] - 'a') + n) % 26) + 'a';
        }
        if(str [i] >= 'A' && str[i] <= 'Z')
        {
            str[i] = ((static_cast<int>(str[i] - 'A') + n) % 26) + 'A';
        }
        if(str[i] >= '0' && str[i] <= '9')
        {
            str[i] = ((static_cast<int>(str[i] - '0') + n) % 10) + '0';
        }
    }
    cout << str;
    return 0;
}