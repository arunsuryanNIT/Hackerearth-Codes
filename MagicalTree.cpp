#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    int Max = INT_MIN;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int ans;

    int ans1 = s[0] - 48;
    int ans2=0;
    for(int i=1;i<s.size();i++)
    {
        if(s[i] == '+')
            ans1+= s[i+1]-48;
        else if(s[i]  == '-')
            ans2+=s[i+1] - 48;
    }
    ans = ans1-ans2;
    if(Max < ans)
        Max = ans;


    }
    cout<<Max;

}
