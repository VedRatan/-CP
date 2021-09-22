#include<bits/stdc++.h>
using namespace std;
int main()
{
    int root, n;
   cin>>n>>root;

    if(root == 0 && n > 1)
        cout<<"No solution\n";
    else
    {
        for(int i =n; i >= 2; i--)
            cout<<"9";
        cout<<root;
    }


    return 0;
}