#include <iostream>
using namespace std;
int main()
{
    int alice = 0, bob = 0, alar[3] = {0}, bobar[3] = {0};
    for (int i = 0;i < 3; i++)
    {
        cin >> alar[i];
    }
    for (int i = 0;i < 3; i++)
    {
        cin >> bobar[i];
    }
    for (int i = 0;i < 3; i++)
    {
        if( alar[i] > bobar[i])
        {
            alice ++;
        }
        else if( alar[i] < bobar[i])
        {
            bob++;
        }
    }
    cout << alice << " " << bob;
    return 0;
}