#include <bits/stdc++.h>
#define maxn 100010
using namespace std;
int a[maxn],b[maxn];
int main(void){
    int n;
    while(cin >> n){
     for(int i=0; i<n; ++i)
      cin >> a[i] >> b[i];
     sort(a,a+n);
     sort(b,b+n);
     int s = 1;
     int t = 1;
     for(int i=1; i<n; ++i){
      if(a[i] != a[i-1])
       ++s;
      if(b[i] != b[i-1])
       ++t;
     }
     if(s<=t)
      cout << s << endl;
     else cout << t << endl;
    }
    return 0;
}
