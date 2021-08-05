#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int x1, y1, x2, y2, x3, y3, x4, y4;
    cin >> x1 >> y1 >> x2 >> y2;

    int disx = x1 - x2;
    int disy = y1 - y2;

    if (disx != 0 and disy != 0)
    {
        x3 = x1;
        y3 = y2;
        x4 = x2;
        y4 = y1;
    }
    else if (disx != 0)
    {
        x3 = x1;
        y3 = y1 + abs(disx);
        x4 = x2;
        y4 = y2 + abs(disx);
    }
    else
    {
        x3 = x1 + abs(disy);
        y3 = y1;
        x4 = x2 + abs(disy);
        y4 = y2;
    }

         if (disx != 0 and disy != 0 and abs(disx) != abs(disy))
         cout << -1 << endl;
         else
        cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;
    return 0;
}