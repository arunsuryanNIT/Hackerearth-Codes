#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int t, green, purple, noofpart, i, j, sum1 = 0, sum2 = 0;
    cin >> t;
    while(t--)
    {
        cin >> green >> purple;
        cin >> noofpart;
        int arr[noofpart][2];
        for(i = 0; i < noofpart; i++)
        {
            for(j = 0; j < 2; j++)
            {
                cin >> arr[i][j];
            }
        }
        for(i = 0; i < noofpart; i++)
        {
            for(j = 0; j < 2; j++)
            {
                if(j == 0)
                {
                    sum1 = sum1 + green*arr[i][j];
                }
                if(j == 1)
                {
                    sum1 = sum1 + purple*arr[i][j];
                }
            }
        }
        for(i = 0; i < noofpart; i++)
        {
            for(j = 0; j < 2; j++)
            {
                if(j == 0)
                {
                    sum2 = sum2 + purple*arr[i][j];
                }
                if(j == 1)
                {
                    sum2 = sum2 + green*arr[i][j];
                }
            }
        }
        if(sum1 < sum2)
        {
            cout << sum1;
        }
        else
        {
            cout << sum2;
        }
        
        cout << endl; 
        sum1 = sum2 = 0;
    }
    return 0;
}