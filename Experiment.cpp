#include<bits/stdc++.h>
using namespace std;
int main()
{
    string ch;
    cin >> ch;
    int n=ch.size();
    int i=0,m=0;
    while(n>=6)
    {
        if(ch.substr(i,6)=="000000" || ch.substr(i,6)=="111111")
        {
            m++;
            break;
        }
        n--;
        i++;
    }
    if(m==1)
        cout << "Sorry, sorry!";
    else
        cout << "Good luck!";
    return 0;
}