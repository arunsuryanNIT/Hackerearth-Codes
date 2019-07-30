#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int size, i;
    long long int answer = 1;
    cin >> size;
    int arr[size];
    for(i = 0 ;i < size; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < size; i++)
    {
        answer = (answer * arr[i]) % (1000000007);
    }
    cout << answer;
}