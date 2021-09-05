#include <bits/stdc++.h>
using namespace std;
bool sortbysec(const pair<int,int> &a, const pair <int,int> &b)
{
    return (a.second<b.second);
}
int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int n;
    cin>>n;
    long long int x[n],y[n];
    for (int i = 0; i < n;i++)
        cin>>x[i]>>y[i];
    int lower=0,upper=0, left=0, right=0,points=0;
    for(int i = 0; i < n;i++)
    {
        int X=x[i],Y=y[i];
        lower=upper=left=right=0;
        for(int j = 0; j <n; j++)
        {
            if(x[j]==X)
            {
                if(y[j]>Y)
                right+=1;
                if(y[j]<Y)
                left+=1;
            }
            if(y[j]==Y)
            {
                if(x[j]>X)
                upper+=1;
                if(x[j]<X)
                lower+=1;
            }
        }
          if(lower>0 && right>0 && upper>0 && left>0)
                points++;
    }
    cout<<points<<endl;
    return 0;
}