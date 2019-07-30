#include <iostream>
int main()
{
    int SH, SM, EH, EM, Start_Total, End_Total, Time_Taken, T;
    std :: cin >> T;
    while(T--)
    {
        std :: cin >> SH >> SM >> EH >> EM;
        Start_Total = 60 * SH + SM;
        End_Total = 60 * EH + EM;
        Time_Taken = End_Total - Start_Total;
        std :: cout << Time_Taken/60 << " " << Time_Taken % 60;
        std :: cout << std :: endl;
    }
    return 0;
}