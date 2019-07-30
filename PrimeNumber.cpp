#include <iostream>
#include <math.h>
using namespace std;
bool check_prime(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n % i == 0)
        return false;
    }
    return true;
}
int main()
{
    int num;
    cin >> num;
    for (int i = 2; i <= num ; i++)
    {
        if (check_prime(i))
        cout << i << " ";
    } 
}