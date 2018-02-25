#include<bits/stdc++.h>
using namespace std;
vector<int> arr;
int main()
{
	long int t,n,i,j;
	cin>>t;
	while(t--)
	{
		cin>>n;
	  if(arr.size()==0)
		for(i=0;i<500;i++)
			arr.push_back(i+1);
		vector<int>::iterator it;
  			for(i=0;i<n;i++)
  		{
  			for(j=i+1;j<n;j++)
   					{it = find(arr.begin(), arr.end(), arr[i]+arr[j]);
   					if(it!=arr.end())
   						{
   							//cout<<"-> "<<(*it)<<"-> ";
   							arr.erase(it);
   						}
   					}
  		}
   			for(i=0;i<n;i++)
   				cout<<arr[i]<<" ";
   			cout<<"\n";
	}
	return 0;
} 
