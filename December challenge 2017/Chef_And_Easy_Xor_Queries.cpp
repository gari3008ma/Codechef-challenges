#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t,n,sum=0,i,j,arr[100000],xr[100000],q,title,a,b;

     	    cin>>n>>q;
     	    for(i=0;i<n;i++)
     	    {
     	    	cin>>arr[i];
     	    }
     	    while(q--)
     	    {
     	    	cin>>title>>a>>b;
     	    	if(title==1)
     	    	{
     	    		arr[a-1]=b;
     	    	}
     	    	else
     	    	{
     	    		sum=0;
     	    		memset(xr,0,sizeof(xr));

     	    		for(i=0;i<a;i++)
     	    	{
     	    		sum=sum^arr[i];
     	    		if(sum==b )
     	    			xr[i]=xr[i-1]+1;
     	    		else
     	    			xr[i]=xr[i-1];
     	    	}
     	    	    cout<<xr[a-1]<<"\n";
     	    	}
     	    }

     return 0;
} 
