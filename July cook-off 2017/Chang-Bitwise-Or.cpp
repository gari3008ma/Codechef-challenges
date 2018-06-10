#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n,i,j,arr[100000],cost,res;
	cin>>t;
	while(t--)
	{
		cin>>n;
		for(i=0;i<n;i++)
			cin>>arr[i];
		cost=0;
		res=arr[0];

		for(i=1;i<n;i++)
		{
			res=res|arr[i];
		}
		cout<<res<<"\n";

	}
}
