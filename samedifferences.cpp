#include <bits/stdc++.h> 
using namespace std;
int main() {	
int t;	
cin>>t;	
while(t--)
 {	
int n;
map<int, int> mp;
cin>>n;	
long long ans=0;	
for(int i=1; i<=n; i++) {	
int x;	
cin>>x;	
ans+=mp[x-i]++;
}	
cout<<ans<<endl;
}	
return 0;
}