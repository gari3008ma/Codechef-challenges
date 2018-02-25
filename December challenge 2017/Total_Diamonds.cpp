#include<bits/stdc++.h>
#include<map>
using namespace std;
 long int countdiamond( long int x)
{
	 long int odd=0,even=0;
	while(x)
	{
		if(x%2==0)
		{
				even=even+(x%10);
		}
		else
		{
			   odd=odd+(x%10);
		}
		x=x/10;
	}
	return (abs(even-odd));
}
int main()
{
	 long int t,n,sum=0,x,y,k,l,p,ans;
	cin>>t;
	while(t--)
     {
     	    cin>>n;
     	    sum=0;
     	    k=0;
            for(x=0;x<n;x++)
            {
            	l=0;
            	p=0;
            	for(y=k;y<n;y++)
            	{
            		ans=countdiamond(x+y+2);
            		l=l+ans;
            		if(x!=y)
            			p=p+ans;
                     //sum=sum+l;;
            		//cout<<x<<" "<<y<<" ";
            	}
            	//cout<<l<<" "<<p<<"\n";
            	sum=sum+l+p;
            	k++;
            }
            cout<<(sum)<<"\n";
     }
     return 0;
}  
