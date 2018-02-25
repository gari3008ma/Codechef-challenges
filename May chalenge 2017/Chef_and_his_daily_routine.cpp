#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,i,j,k,c,f;
	string str,pkr;
	scanf("%d",&t);
	while(t--)
	{
		cin>>str;
		n=str.length();
		f=0;
            	for(i=0;i<n;i++)
            	{
            		if(str[i]=='S'&& str[i+1]=='E')
            			{
            				printf("no\n");
            				f=1;
            				break;
            			}
            		if(str[i]=='S'&& str[i+1]=='C')
            			{
            				printf("no\n");
            				f=1;
            				break;
            			}
            		if(str[i]=='E'&&str[i+1]=='C')
            			{
            				printf("no\n");
            				f=1;
            				break;
            			}

            	}
            	if(f!=1 )
            		printf("yes\n");

	}
} 
