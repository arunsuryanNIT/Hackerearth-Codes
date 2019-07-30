#include <iostream>
#include <string>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int hash1[26] = {0}, hash2[26] = {0}, i = 0, flag = 1;
        string str1, str2;
        cin >> str1 >> str2;
        for(i = 0; i < str1.length(); i++)
        {
            hash1[str1[i] - 'a']++;
        }
        for(i = 0; i < str2.length(); i++)
        {
            hash2[str2[i] - 'a']++;
        }
        for(i = 0; i < 26; i++)
        {
            if(hash1[i] != hash2[i])
            {
                flag = 0;
                break;
            }
        }
        if(flag)
        cout << "YES";
        else 
        cout << "NO";
    }
   return 0; 
}