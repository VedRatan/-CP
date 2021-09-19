#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    char a[4][4];
    int c,res=0;
    cin>>c;
    int capacity=2*c;
    int check[10]={0};
    for (int i = 0; i < 4; i++)
   {
        for (int j = 0; j < 4; j++)
        cin>>a[i][j];
   }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(a[i][j]=='.')
            {continue; }
            else
            {
                check[a[i][j]-'0']+=1;
            }
        }
    }
    for(int i=0;i<10;i++)
    {
        if(check[i]>capacity)
        {
            res=1;
        }
    }
    if(res==1)
    cout<<"NO"<<endl;
    else
    cout<<"YES"<<endl;
    return 0;
}