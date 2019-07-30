#include <iostream>
#include <string>
using namespace std;
int main()
{
    int i, flag = 1, temp = 1, sum = 0;
    string str;
    getline(cin, str);
    for(i = 0; i != str.length(); i++)
    {
        if(str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            flag = 0;
            break;
        }
    }
    for(i = 0; i != str.length() - 1; i++)
    {
       if(i == 1 || i == 2 || i== 5 || i == 6)
       continue;
       else
       {
           int num1 = static_cast<int>(str[i] - '0');
           int num2 = static_cast<int>(str[i + 1] - '0');
           sum = num1 + num2;
           if(sum % 2 != 0)
           {
               temp = 0;
               break;
           }
           sum = 0;
       }  
    }
    if(flag && temp)
    {
        cout << "valid";
    }
    else
    {
        cout << "invalid";
    }
    return 0;
}