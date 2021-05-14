#include <iostream>
#include <vector>
using namespace std;
void result(int n)
{
    int e;
    int count =0;
    vector <int> v,v1;
     for(int i = 0; i < n;i++)
    {
        cin>>e;
        v.push_back(e);
    }
    for(int i=0;i<n-1;i++)
    {
        if(v[i]==v[i+1])
        {
           v1.push_back(v[i]);
           count++;
        }
        else
        {
            v1.push_back(v[i]^v[i+1]);
            count++;
        }
    }
    v1.resize(count);
    int c=1;
    for(int i=0;i<v1.size();i++)
    {
        if(v1[i]==v1[i+1])
        c++;
    }
    if(c==count)
    cout<<"YES";
    else
    cout<<"NO";
}
int main()
{
    int t,n;
    cin>>t;
    for(int i=1;i<=t;i++)
    {
        cin>>n;
        result(n);
        cout<<"\n";
    }
    return 0;
}