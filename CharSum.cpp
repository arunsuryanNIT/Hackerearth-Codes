#include <iostream>
#include <string>
using namespace std;
int main()
{
    int sum = 0, i;
    string str;
    cin>>str;
    for(i = 0; i != str.length(); i++)
    {
        sum = sum + int(str[i]);
    }
  sum = sum - (i*96);
  cout << sum << endl;
}