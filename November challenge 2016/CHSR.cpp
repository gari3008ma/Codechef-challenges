#include <bits/stdc++.h>
using namespace std;
#define p(x) printf("%d",x);
#define s(x) scanf("%d",&x);
int main()
{
    int t,n,cen,i,j;
    s(t);
    while(t--)
    {
                s(n);
               cen=(n+1)/2;
                for(i=0;i<n;i++)
                {

                    for(j=0;j<n;j++)
                    {
                         p(cen);
                         cout<<" ";
                          cen++;
                          if(cen>n)
                           cen=1;
                    }
                    cen--;
                    if(cen<1)
                    cen=n;
                    cout<<"\n";
                }
    }
    return 0;
}
