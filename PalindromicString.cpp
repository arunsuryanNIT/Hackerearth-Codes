#include <iostream>
#include <string>
int main()
{
    int i = 0;
    std::string str;
    std::cin >> str;
    int flag = 1;
    int length = str.length() - 1;
    while (i < length)
    {
        if(str[i++] != str[length--])
        {
            flag = 0;
            break;
        }
    }
    if(flag)
    std::cout << "Yes";
    else
    std::cout << "No";
    return 0;
}