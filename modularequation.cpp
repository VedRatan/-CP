#include <bits/stdc++.h>
using namespace std;
int check(int m,int a,int b)
{
    if(((m%a)%b)==((m%b)%a))
    return 1;
    else return 0;
}
int main()
{
    int t,n,m;
    cin>>t;
    int c=2, i=1, pairs=0, k;
    while(t--)
    {
        cin>>n>>m;
        k=(n*(n-1))/2;
        // if(n>m)
        // cout<<k<<endl;
        // else
        while(k--)
        {
        if(c>n)
        {
            i+=1;
            c=i+1;
        }
        if(check(m,i,c)==1) pairs++;
        c++;
        }
        cout<<pairs<<endl;
        i=1;
        c=2;
        pairs=0;   
    }
    return 0;
}