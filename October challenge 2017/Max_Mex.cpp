#include<bits/stdc++.h>
using namespace std;
int main()
{
	 long int t,n,i,j,k,ma;
	bool arr[500000];
	cin>>t;
	while(t--)
	{
	    cin>>n>>k;
	    memset(arr,false,sizeof(arr));
	    ma=INT_MIN;
	    for(i=0;i<n;i++)
	        {
	             cin>>j;
	             if(j>ma)
	             	ma=j;
	             arr[j]=true;
	        }
	        i=0;
	     //n=*(max_element(arr,arr+n));
	     n=ma;
	     //cout<<n<<"\n";
        for(i=0; k>0;i++)
        {
                  if(arr[i]==false)
                  {
                          arr[i]=true;
                          k--;
                  }
        }
        while(i<3000009)
         {

         	if(arr[i]==false)
           {
              cout<<i<<"\n";
              break;
           }
           i++;
        }
	}
} 
