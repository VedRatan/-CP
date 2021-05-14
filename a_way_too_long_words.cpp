#include <iostream>
#include <vector>
using namespace std;
string abbreviation(string s)
{
    string newstr = "";
    int l = s.length();
    if (l <= 10)
        return s;
    else
    {
        string t = to_string(l - 2);
        newstr = newstr + s.at(0) + t + s.at(l - 1);
        return newstr;
    }
}
int main()
{
    string s;
    int testcases;
    cin >> testcases;
    for (int i = 0; i < testcases; i++)
    {
        cout<<endl;
        cin >> s;
        cout << abbreviation(s);
    }
    return 0;
}