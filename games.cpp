#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    int count=0,i=0;
    cin>>t;
    int home[t], guest[t];
  for(int i=0;i<t;i++){
      cin>>home[i]>>guest[i];
  }
    for(int j=0;j<t;j++)
    for(int k=0;k<t;k++)
    {
        if(home[j]==guest[k]) count++;
    }
    cout<<count<<endl;;
    return 0;
}