#include <iostream>
int main()
{
    int n, min_skill, skill;
    std :: cin >> n;
    std :: cin >> min_skill;
    while(n--)
    {
        std :: cin >> skill;
        if(skill >= min_skill)
        {
            std :: cout << "YES";
        }
        else
        {
            std :: cout << "NO";
        }
        std :: cout << std :: endl;
    }
    return 0;
}