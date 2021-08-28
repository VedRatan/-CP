#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
    int n,v,k,s,check=0;
    cin>>n>>v;
    int arr[51];

    int  counter=0,pos=0;
    for(int i=1;i<=n;i++) {
      cin >> k;
        check = 0;
        for (int j = 0; j < k; j++) {
            cin >> s;
            if (s < v && check == 0) {
                arr[counter] = i;
                counter++;
                check = 1;
            }
        }
    }
    cout<<counter<<endl;
    for (int i = 0; i < counter; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}