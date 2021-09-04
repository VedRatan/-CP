#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int n,counter=0,counter2=0,allequal=0;
    cin>>n;
    char s[n][n];
    for(int i = 0; i < n; i++)
    for(int j = 0; j < n; j++)
    cin>>s[i][j];
     char start=s[0][0];
    char check=s[0][1];
    for(int i = 0; i < n; i++)
    {
        for(int j=0;j<n;j++)
        {
            if(s[i][j]==check)
            allequal+=1;
            if(i==j&&s[i][j]==start)
                counter+=1;
            if((i+j)==(n-1)&&s[i][j]==start)
                counter+=1;
            if((i!=j)&&((i+j)!=n-1)&& s[i][j]==check)
            counter2+=1;
        }
    }
    // cout<<counter<<endl;
    // cout<<counter2<<endl;
    if(allequal==n*n)
    cout<<"NO"<<endl;
    else if(counter==2*n && counter2==((n*n) - (2*n-1)))
    cout<<"YES"<<endl;
    else
    cout<<"NO"<<endl;
    return 0;
}