#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int  i = 0, j = 0, sum1 = 0, sum2 = 0, diff = 0, n;
    cin >> n;
    int arr[n][n];
    for (i = 0; i < n ; i++)
    {
        for(j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (i = 0; i < n ; i++)
    {
        for(j = 0; j < n; j++)
        {
            if(i == j)
            {
                sum1 = sum1 + arr[i][j];
            }
        }
    }
    for (i = 0; i < n ; i++)
    {
        for(j = 0; j < n; j++)
        {
            if (i + j == n - 1)
            {
                sum2 = sum2 + arr[i][j];
            }
        }
    }
    diff = abs(sum1 - sum2);
    cout<<diff;
    return 0;
}