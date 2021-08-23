#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int t,n;
    cin>>t;
    while (t--)
    {
        cin>>n;
        map <int,int> m;
        int x, result=n;
        for(int i=0;i<n;i++)
        {
            cin>>x;
            m[x]++;
        }
        int counter=0;
        for(auto i:m)
        {
            result=min(result, n-i.second);
            counter++;
        }
        if(counter>=2)
        result=min(result,n-2);
        cout<<result<<endl;
    }
    return 0;
}