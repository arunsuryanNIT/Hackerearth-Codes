#include <iostream>
int main()
{
    int arr[100000], count = 0;
    for (int i = 0; i < 100000; i++)
    {
        std :: cin >> arr [i];
        count++;
        if(arr [i] == 42)
        break;
    }
      for (int i = 0; i < count; i++)
    {
        std :: cout << arr[i]<< std :: endl;
    }
    return 0;
}