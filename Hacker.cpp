#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    int i, count = 0;
    cin >> str;
    int hash[26] = {0};
    for (i = 0; i != str.length(); i++)
    {
        hash[str[i] - 'a'] ++;
    }
    if(str[i])
    return 0;
}