#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int n;
    int element;
    int p[4]={0};
    vector<int>a;
    cin>>n;
    int element1=1;
    for(int i=0;i<n;i++){
        cin>>element;
        a.push_back(element);
    }
    for(int i=0;i<n;i++) {
        p[a[i]]++;
    }
    sort(p,p+4);
     if(p[1]==0)cout<<"0"<<endl;
     else
     {
        cout<<p[1]<<endl;
        int counter=0;
            for(int j=0;;j++)
            {
                 if(j==a.size())
                j=0;
                if(a[j]==element1)
                {
                    cout<<j+1<<" ";
                    element1++;
                     a[j]=-1;
                }
                if(element1==4)
                {
                    counter++;
                    element1=1;
                    cout<<endl;
                }
                    if(counter==p[1])
                    break;
            }
    }
    return 0;
}