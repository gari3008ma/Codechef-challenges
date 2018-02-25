#include <bits/stdc++.h>
using namespace std;
long int c;
long int prime(long int m)
{
                set<long int> a;
               long int i,p;
                c=0;
                  while(m%2==0)
                  {
                     m=m/2;
                     a.insert(2);
                     c++;
                   }

                for(i=3;i<=sqrt(m);i=i+2)
                        while(m%i==0)
                                { m=m/i; a.insert(i);  c++;}
                    if (m> 2)
                        {
                                a.insert(m);
                                c++;
                        }
                  if(a.size()==1)
                      {
                          p=*a.begin();
                            a.clear();
                         return p;
                      }
                      a.clear();
                  return 0;
}
int main()
{
   long int t,n,m,i,r;
    cin>>t;
    while(t--)
    {
         cin>>n;
         i=0;
           while(n>0)
         {
             m=n;
             if(m==1 )
              n=n-1;
              else if(m==2)
              n=n-2;
              else
              {
                 while(m>1)
                {
                    if(prime(m)!=0)
                 {
                        r=pow(prime(m),c);
                   if((n-r)==0)
                    {
                        n=n-r;
                        break;
                      }
                   else if(prime(n-r)==0 &&(n-r)!=1)
                      {
                            n=n-r;
                            break;
                       }
                       // cout<<m<<" "<<c<<" \n";
                   }
                 m--;
                }
                if(m==1)
                  n=n-1;
             }
             i++;

         }
         if(i%2==0)
           cout<<"Misha\n";
           else
           cout<<"Chef\n";
    }
    return 0;
}
