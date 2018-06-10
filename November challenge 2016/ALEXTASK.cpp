#include <bits/stdc++.h>
using namespace std;
#define s(x) scanf("%lld",&x)
#define p(x) printf("%lld",x)
long long int gcd(long long int a,long long int b)
{
         if (a==0 )
          return b;
         if(b==0)
             return a;
             if(a==b)
                return a;
         return gcd(b,a%b)    ;
}
int main()
{
    long long int t,n,i,j,a[600],g,k;
    unsigned long long int in,p;
    s(t);
    while(t--)
    {
         s(n);
         for(i=0;i<n;i++)
         {
                s(a[i]);
         }

         p=INT_MAX;
         for(i=0;i<n;i++)
         {

                 for(j=i+1;j<n;j++)
                 {
                    in=(a[i]*a[j]);
                       if((in/gcd(a[i],a[j]))< p)
                       p=(a[i]*a[j])/gcd(a[i],a[j]);
                }
         }
         cout<<p<<"\n";
     }
    return 0;
}
