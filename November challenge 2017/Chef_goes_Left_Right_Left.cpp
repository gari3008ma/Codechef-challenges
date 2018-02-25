#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n,lm,rm,x,i,maxv,arr;
	cin>>t;
	while(t--)
	{
	      cin>>n>>x;
	      lm=INT_MIN;
	      rm=INT_MAX;
	      bool flag=false,vul=true;
	      for(i=0;i<n;i++)
	      {
	      	    cin>>arr;
	            if(arr> x && rm>arr)
	            {
	            			rm=arr;
	            }
	            else if(arr<x && lm<arr)
	            {
	                        lm=arr;
	            }
	            else if(arr==x && vul!=false )
	            {
	                   flag=true;
	            }
	            else if(flag!=true &&((arr>rm && arr>x  )|| (arr<lm && arr<x)))
	            {
	                 flag=false;
	                   vul=false;
	            }
	      }
	      if(flag)
	      cout<<"YES\n";
	      else
	      cout<<"NO\n";
	}
	return 0;
} 
