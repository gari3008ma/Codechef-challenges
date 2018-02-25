#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,i,n,k,e,j,count,k1;
	map<int,set<int> > mp;
	set<int> a,b;
   set<int>::iterator it;
	scanf("%d",&t);
	while(t--)
	{

		scanf("%d%d",&n,&k);
				for(i=0;i<n;i++)
		{
			scanf("%d",&e);
			for(j=0;j<e;j++)
			{
				scanf("%d",&k1);
				mp[i].insert(k1);
			}
		}
        for(i=1;i<=k;i++)
		b.insert(i);
		count=0;
		for(i=0;i<n;i++)
		{
			a=mp[i];
			if(a==b)
				count=count+(n-i-1);
			else
			{
			for(j=i+1;j<n;j++)
			{
				if(mp[j]==b)
					count++;
				else
				{a.insert(mp[j].begin(), mp[j].end());
   						if(a==b)
					count++;
 				}
   				//for(it=a.begin();it!=a.end();it++)
   					//cout<<(*it)<<" ";
   				//cout<<"\n";

				a=mp[i];
			}
		}
	}
		printf("%d\n",count);
		mp.clear();
		a.clear();
		b.clear();
	}
} 
