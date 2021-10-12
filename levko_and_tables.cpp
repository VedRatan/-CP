#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
        int n,k;
        int i,j;

        cin>>n>>k;

        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(i==j)
                    cout<<k<<" ";
                else
                    cout<<"0 ";
            }

            cout<<endl;
        }
    return 0;
}