#include<bits/stdc++.h>
using namespace std;

int main()
{
	long long int t,n,arr[100000],i,sum,c,sum1,sum2,c1,sum3;
	cin>>t;
	while(t--)
	{
		cin>>n;
		sum=0;
		sum1=0;
		c=1;
		c1=0;
		sum2=0;
		sum3=0;
		for(i=0;i<n;i++)
		{
			cin>>arr[i];
			if(((sum1+arr[i])*c) > (sum1*(c-1)))
			{
				sum1=sum1+arr[i];
				c++;
			}
			else
				sum=sum+arr[i];
			if(arr[i]>0)
				{
					sum2=sum2+arr[i];
					c1++;
				}
		    else
		    {
		    	sum3=sum3+arr[i];
		    }
		}
		sum=((sum1*(c-1))+sum);
		sum2=(sum2*c)+sum3;
		if(sum>sum2)
		cout<<sum<<"\n";
	    else
	    	cout<<sum2<<"\n";
	}
	return 0;
} 
