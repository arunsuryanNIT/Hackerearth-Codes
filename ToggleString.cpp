#include <iostream>
#include <string>
int main()
{
    std :: string str;
    getline(std :: cin, str);
    for(int i = 0; i != str.length(); i++)
    {
        if(static_cast<int>(str[i]) >= 97 && static_cast<int>(str[i]) <= 122)
        {
            str[i] = static_cast<int>(str[i]) - 32;
        }
        else if(static_cast<int>(str[i]) >= 65 && static_cast<int>(str[i]) <= 90)
        {
            str[i] = static_cast<int>(str[i]) + 32;
        }
    }
    for(int i = 0; i != str.length(); i++)
    {
        std :: cout << str[i];
    }
    return 0;
}