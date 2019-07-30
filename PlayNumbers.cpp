#include <bits/stdc++.h>
int main()
{
    long long int size, queries, L , R, index, answer;
    std :: cin >> size >> queries;
    long long int sum[size], arr[size];
    for(index = 1; index <= size; index ++ )
    {
        std :: cin >> arr[index]; 
    }
    sum[0] = 0;
    for (index = 1; index < size; index++)
    {
        sum[index] = sum[index - 1] + arr[index];
    }
    for (index = 0; index < queries; index++)
    {
        std :: cin >> L >> R;
        if(R == size)
        {
            answer = (sum[ R - 1] - sum [L - 1]) / (R - L);
        }
        else
        answer = (sum[R] - sum [L - 1]) / (R - L + 1);
        std :: cout << answer << std :: endl;
    }
    return 0;
}