#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, value, x(0), y(0), z(0);
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> value;
        if (i % 3 == 1)
            x += value;
        else if (i % 3 == 2)
            y += value;
        else
            z += value;
    }

    if (x > y and x > z)
        cout << "chest" << endl;
    else if (y > x and y > z)
        cout << "biceps" << endl;
    else
        cout << "back" << endl;
    return 0;
}