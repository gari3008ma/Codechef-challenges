#include<bits/stdc++.h>
using namespace std;
int main()
{
		int t,n,i,arr[100009];
		cin>>t;
		while(t--)
		{
		         cin>>n;
		         for(i=0;i<n;i++)
		         cin>>arr[i];
		       cout<<n-(*max_element(arr,arr+n))<<"\n";
		}
} 
