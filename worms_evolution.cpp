#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int n;
    cin>>n;
    vector <int> v;
    int element;
    for(int i=0;i<n;i++) {
        cin>>element;v.push_back(element);
    }
    int sum=0;
    for(auto i=v.begin();i!=v.end();i++) {
        for(auto j=i+1;j!=v.end();j++)
        {
            sum=*i+*j;
            if(find(v.begin(),v.end(),sum)!=v.end())
            {
                cout<<find(v.begin(),v.end(),sum)-v.begin()+1<<" "<<i-v.begin()+1<<" "<<j-v.begin()+1<<" "<<endl;            
                return 0;
            }
        }
    }
    cout<<"-1"<<endl;
    return 0;
}