#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t,n,i,j,m,c;
	cin>>t;
	while(t--)
	{
		cin>>n>>m;
		c=((m+n+1)*(n+m))/2+n+1;
		cout<<c<<"\n";
	}
	return 0;
} 
