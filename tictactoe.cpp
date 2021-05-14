#include <bits/stdc++.h>
using namespace std;
bool check(char alphabet, char a[3][3])
{
    if (a[0][0] == alphabet && a[0][0] == a[1][1] && a[1][1] == a[2][2])
        return 1;
    if (a[0][2] == alphabet && a[1][1] == a[0][2] && a[1][1] == a[2][0])
        return 1;
    for (int i = 0; i < 3; i++)
    {
        if (a[i][0] == alphabet && a[i][0] == a[i][1] && a[i][1] == a[i][2])
            return 1;
        if (a[0][i] == alphabet && a[0][i] == a[1][i] && a[1][i] == a[2][i])
            return 1;
    }
    return 0;
}
int result(int crosscount, int zerocount, int spacecount, char a[3][3])
{
    if (crosscount < zerocount)
        return 3;
    if (crosscount > zerocount + 1)
        return 3;
    bool x = check('X', a);
    bool o = check('O', a);
    if (x && o)
        return 3;
    if (crosscount == zerocount && x)
        return 3;
    if (o && crosscount > zerocount)
        return 3;
    if (x || o)
        return 1;
    if (spacecount == 0)
        return 1;
    return 2;
}
int main()
{
    long int t;
    cin >> t;
    while (t--)
    {
        int crosscount = 0, zerocount = 0, spacecount = 0;
        char c1;
        char a[3][3];
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cin >> a[i][j];
                if (a[i][j] == 'X')
                    crosscount++;
                else if (a[i][j] == 'O')
                    zerocount++;
                else if (a[i][j] == '_')
                    spacecount++;
            }
        }
        int res = result(crosscount, zerocount, spacecount, a);
        cout << res << endl;
    }
    return 0;
}