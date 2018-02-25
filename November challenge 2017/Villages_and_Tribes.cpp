#include<bits/stdc++.h>
using namespace std;
#define M 1000000007
int main()
{
	int t,n,i,counta,countb,dot,l,r;
	cin>>t;
	while(t--)
	{
	   		string str;
	   		cin>>str;
	   		n=str.length();
	   		counta=0;
	   		countb=0;
	   		dot=0;
	   		l=-1;
	   		r=-1;
	   		for(i=0;i<n;i++)
	   		{
	   				if(str[i]=='A')
	   				{
	   					counta++;
	   					if(l==-1)
	   						l=0;
	   					else if(l!=-1 && r==-1)
	   					{
	   						r=0;
	   					}
	   				}
	   				else if(str[i]=='B')
	   				{
	   						countb++;
	   					if(l==-1)
	   						l=1;
	   					else if(l!=-1 && r==-1)
	   					{
	   						r=1;
	   					}
	   				}
	   				else if(l!=-1|| r!=-1)
	   					dot++;
	   				if(l==1 && r==1)
	   				{
	   					countb=countb+dot;
	   					dot=0;
	   					r=-1;
	   					l=1;
	   				}
	   				else if(l==0 && r==0)
	   				{
	   					counta=counta+dot;
	   					dot=0;
	   					r=-1;
	   					l=0;
	   				}
	   				else if(l!=-1 && r!=-1)
	   				{
	   					dot=0;
	   					l=r;
	   					r=-1;
	   				}
	   				//cout<<countb<<" ";
	   		}
	   		cout<<counta<<" "<<countb<<"\n";
	}
} 
