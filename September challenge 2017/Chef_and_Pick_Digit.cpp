#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,n,i,j,temp,k;
   cin>>t;
   while(t--)
   {
       string str,res;
       char p,q;
       k=0;
       cin>>str;
       for(i=65;i<=90;i++)
       {
           j=i%10;
           temp=i/10;
           p=j+'0';
           q=temp+'0';
           //cout<<p<<q<<" ";
            if(str.find(p)!=string :: npos && str.find(q)!=string :: npos )
            {
              if( (str.find(p)==str.find(q)) && count(str.begin(),str.end(),p)>=2)
                 { q=k+'A';
                  res=res+q;
                }
              else if((str.find(p)!=str.find(q)))
                  {
                    q=k+'A';
                    res=res+q;
                  }
            }
              k++;
       }
       cout<<res<<"\n";
       str.clear();
       res.clear();
   }
   return 0;
}    
