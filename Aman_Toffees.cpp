#include <iostream>
#include <math.h>
#define PI 3.1428
int main()
{
    int T, count = 0;
    double radius, x, perim, maxdis;
    std :: cin >> T;
    while (T--)
    {
        std :: cin >> radius >> x;
        perim = PI * 2 * radius;
        maxdis =  100 * x;
        if ( maxdis >= perim)
        {
            count = count + 1;
        }
    }
    std :: cout << count;
    return 0;
}