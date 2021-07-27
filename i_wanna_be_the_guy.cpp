#include <bits/stdc++.h>
using namespace std;
class ved
{
    int n, p, q;

public:
    void input()
    {
        cin >> n;
        cin >> p;
        int a[p];
        for (int i = 0; i < p; i++)
            cin >> a[i];
        cin >> q;
        int b[q];
        for (int i = 0; i < q; i++)
            cin >> b[i];
        result(a, b);
    }
    void result(int a[], int b[])
    {
        int count = 0;
        int check[n + 1] = {0};
        for (int i = 0; i < p; i++)
            check[a[i]] += 1;
        for (int i = 0; i < q; i++)
            check[b[i]] += 1;
        for (int i = 0; i < n + 1; i++)
        {
            if (check[i] != 0)
                count += 1;
        }
        if (count == n)
            cout << "I become the guy." << endl;
        else
            cout << "Oh, my keyboard!" << endl;
    }
};
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ved ob;
    ob.input();
    return 0;
}