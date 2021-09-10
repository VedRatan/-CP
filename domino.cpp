#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    int suma=0,sumb=0,sum;
    for(int i=0;i<n;i++)
    {
        cin>>a[i]>>b[i];
        suma+=a[i];sumb+=b[i];
    }
    sum=suma+sumb;
    if(sum%2==1)
    cout<<"-1"<<endl;
    else if(suma%2==0&&sumb%2==0)
    cout<<"0"<<endl;
    else
    {
        for(int i=0;i<n;i++)
        {
            if((a[i]%2==0&&b[i]%2==1) || (a[i]%2==1&&b[i]%2==0))
            {
                cout<<"1"<<endl;
                return;
            }
        }
        cout<<"-1"<<endl;
    }
}
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    solve();
    return 0;
}