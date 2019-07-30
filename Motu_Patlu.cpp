#include <iostream>
using namespace std;
int main()
{
    int NumofBricks, sum = 0;
    cin >> NumofBricks;
    for (int i = 1; i <= NumofBricks; i++)
    {
        sum += i;
        if(sum > NumofBricks)
        {
            cout << "Patlu";
            break;
        }
        sum += 2 * i;
        if(sum > NumofBricks)
        {
            cout << "Motu";
            break;
        }
    }
    return 0;
}