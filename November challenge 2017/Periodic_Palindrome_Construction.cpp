#include<bits/stdc++.h>
using namespace std;
#define M 1000000007
bool ispalindrome(char str[],int n)
{
	int i=0,j=n-1,s=n-1;
	char k=str[0];
	i=1;
	while(i<n)
	{
		if(str[i]==k)
			i++;
		else
			break;
	}
	if(i==n)
		return false;
	else
		i=0;
	while(i<=j)
	{
		if(str[i]!=str[j])
		{
			return false;
		}
		i++;
		j--;
	}
	return true;
}
void getstring(int n,int p)
{
	int i=0,j,k,s=n-1;
	char str[100000];
	string wrng="impossible";
	memset(str,'0',sizeof(str));
	bool flag=false;
	if(n%p!=0)
	{
			cout<<wrng;
			return;
	}
	while(i<n )
	{
		if(str[i]!='0')
		{
			i++;
		}
		else if(flag &&i+p<n)
		{

			     str[i]='b';
			     str[i+p]='b';
			     str[s-i]='b';
			     flag=false;
			     i++;
		}
		else
		{

			     str[i]='a';
			    if(i+p<n )
			     str[i+p]='a';
			     str[s-i]='a';
			     flag=true;
			     i++;
		}

		//cout<<"hello";
	}
	str[i]='\0';
	//cout<<str<<"\n";
	if(ispalindrome(str,n))
		 {
		 	   cout<<str;
		 }
	else
		 cout<<wrng;
		return;
}
void getstring1(int n,int p)
{
	bool flag=false;
	int i=0,j,s=n-1;
	char str[100000];
	while(i<n)
	{
		if(flag)
		{
			str[i]='b';
			str[s-i]='b';
			flag=false;
		}
		else
			{
				str[i]='a';
				str[s-i]='a';
				flag=true;
			}
		i++;
	}
	str[i]='\0';
	if(ispalindrome(str,n))
     cout<<str;
    else
    	cout<<"impossible";
}
int main()
{
	    int t,n,p,i,j;
	    cin>>t;
	    while(t--)
	    {
	    	cin>>n>>p;
	    	if(n==p)
	    		getstring1(n,p);
	    	else
	    	getstring(n,p);

	    	cout<<"\n";
	    }
	    return 0;
} 
