#include<bits/stdc++.h>
using namespace std;
int main()
{
	long int a,b,k,l,res=0,i,j;
	cin>>a>>b;
	for(i=1;(i)<=a;i++)
	{
		l=1;
		j=i+1;
		while(l<=b)
		{
			l=(j*j)-(i*i);
			 //cout<<(j*j)<<" "<<(i*i)<<" "<<l<"\n";
			j++;
			if(l>0&&l<=b)
			res++;
		}
	}

	cout<<res;
}
