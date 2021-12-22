#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin >> a[i];
    int beg=-1;
    int en=n;
    bool check = true;
    for(int i=1;i<n;i++)
    {
        if(check)
        {
            if(a[i-1]>a[i])
            {
                check=false;
                beg=i-1;
            }
        }
            else
            {
                if(a[i-1]<a[i])
                {
                    en=i;
                    break;
                }
            }
    }
    if(beg!=-1)
    {
        reverse(a+beg,a+en);
        for(int i=1;i<n;i++)
        {
            if(a[i-1]>a[i])
            {
                check=false;
                break;
            }
            else
            check=true;
        }
    }
    if(check)
    {
        cout<<"yes"<<endl;
        if(beg==-1)
        cout<<"1 1"<<endl;
        else
        cout<<beg+1<<" "<<en<<endl;
    }
    else
    cout<<"no"<<endl;
    return 0;
}