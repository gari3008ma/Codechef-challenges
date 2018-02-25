#include<bits/stdc++.h>
#include<map>
using namespace std;
bool isvalid(int x,int y,int n,int m)
{
	return (x>=0 && y>=0 && x<n && y<m);
}
int main()
{
	      long long int t,n,i,j,m,sumr,sumg,sumr1,sumg1,sum;
          cin>>t;
          while(t--)
          {
          	    cin>>n>>m;
          	    string mat[100000];
                   char character;
          	    for(i=0;i<n;i++)
          	    {
          	    		cin>>mat[i];
          	    }
          	    sumr=0;
                   sumg=0;
                   sumr1=0;
                   sumg1=0;
          	    for(i=0;i<n;i++)
          	    {
                    character=(i%2==0)?'R':'G';
          	    	for(j=0;j<m;j++)
          	    	{
          	    			if(mat[i][j]!=character )
          	    			{
          	    				if(mat[i][j]=='G')
          	    					{
          	    						sumg=sumg+3;
          	    						mat[i][j]='R';
          	    					}
          	    				else
          	    					{
          	    						sumr=sumr+5;
          	    						mat[i][j]='G';
          	    					}
          	    			}
                              else
                              {
                                   if(mat[i][j]=='G')
                                        {
                                             sumg1=sumg1+3;
                                             mat[i][j]='R';
                                        }
                                   else
                                        {
                                             sumr1=sumr1+5;
                                             mat[i][j]='G';
                                        }
                              }
                              character= (character == 'R') ? 'G' : 'R';
          	    	}

          	    }
          	    sum=min(sumr+sumg,sumr1+sumg1);
                   cout<<sum<<"\n";
          }
} 
