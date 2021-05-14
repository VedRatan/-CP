#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int sumhours, min, max, days;
    cin >> days >> sumhours;
    int count = 0, schedule = 0;

    int a[days] = {0};
    for (int i = 0; i < days; i++)
    {
        cin >> min >> max;
        if (sumhours >= max)
        {
            a[i] = max;
            sumhours -= max;
        }
        else if (min <= sumhours < max)
        {
            a[i] = sumhours;
            sumhours = 0;
        }
        else if(sumhours==0)
        break;
    }
    if (sumhours==0)
    {
        cout << "YES"<<endl;
        for (int i = 0; i < days; i++)
            cout << a[i] << " ";
    }
    else
        cout << "NO";
    return 0;
}