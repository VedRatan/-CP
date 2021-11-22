#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie(0);
 int n , m ;
	cin>>n>>m;
	int posone =0, negone =0;		
        int a[n]; 
	for(int i =0; i < n ; i ++)
	{
		cin>>a[i];
		if( a [ i ]==1) 
			posone ++;
		else 
			negone ++;
	}
		
	
	int l , r ;
	while( m --)
	{
		cin>>l>>r;
		int num = r - l +1;
		if( num %2!=0)
			cout<<"0"<<endl;
		else
		{
			if( num /2<= posone && num /2<= negone )
				cout<<"1"<<endl;
			else
				cout<<"0"<<endl;
		}
	}
	return 0;
}