#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen ("input.txt","r",stdin);
    freopen ("output.txt","w",stdout);

    int a,b;
    int index;
    cin>>index;
    for(int i=0;i<3;i++)
    {
        cin>>a>>b;
        if(index==a)
        index=b;
        else if(index==b)
        index=a;
    }
    cout<<index<<endl;
    return 0;
}