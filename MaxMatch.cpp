#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str;
    long long int i, T, Total = 0;
    cin >> T;
    while(T--)
    {
        cin >> str;
        for(i = 0; i != str.length(); i++)
        {
            switch(str[i])
            {
                case '0':
                Total = Total + 6;
                break;
                case '1':
                Total = Total + 2;
                break;
                case '2':
                Total = Total + 5;
                break;
                case '3':
                Total = Total + 5;
                break;
                case '4':
                Total = Total + 4;
                break;
                case '5':
                Total = Total + 5;
                break;
                case '6':
                Total = Total + 6;
                break;
                case '7':
                Total = Total + 3;
                break;
                case '8':
                Total = Total + 7;
                break;
                case '9':
                Total = Total + 6;
            }
        }
        if(Total % 2 == 0)
        for( i = 1; i <= (Total/2); i++)
        {
            cout << "1";
        }
        else
        {
            Total = Total - 3;
            cout << "7";
            for( i = 1; i <= Total/2; i++)
            {
                 cout << "1";
            }
        }
        cout <<"\n";
        Total = 0;
    }
}