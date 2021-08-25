#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int n,m;
    cin>>n>>m;
    int counter=1;
    // char c[n][m];
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            for(int j=0;j<m;j++)
            cout<<"#";
            cout<<endl;
        }
        else
        {
            if(counter==0)
            counter=1;
            else
            counter=0;

            for(int j=0;j<m;j++)
            {
                
                if(j==m-1&&counter==0)
                {
                    cout<<"#";
                  
                }
                else if(j==0&&counter==1)
                {
                    cout<<"#";
                }
                else
                cout<<".";
            }
            cout<<endl;
        }
    }
    return 0;
}