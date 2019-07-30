#include <iostream>
using namespace std;
int main()
{
    long long int size, queries, i, type, L ,R;
    cin >> size >> queries;
    long long int arr[size];
    for (i = 0; i < size ; i++)
    {
        cin >> arr[i];
    }
    while(queries --)
    {
        long long int sum = 0;
        cin >> type >> L >> R;
        if (type == 1)
        {
            arr[L] = R;
        }
        else
        {
            for (i = L ; i <= R ; i++)
            {
                sum = sum + arr[i];
            }
            cout << sum <<endl;
        }
    }
    return 0;
}