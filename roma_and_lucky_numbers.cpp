#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int n,k;
    cin>>n>>k;
    long int x;
    int counter=0,result=0;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        counter=0;
        for(int i=x;i>0;i/=10)
        {
            if((i%10)==4 || (i%10)==7)
            counter+=1;
        }
        if(counter<=k)
        result+=1;
    }
    cout<<result<<endl;
    return 0;
}