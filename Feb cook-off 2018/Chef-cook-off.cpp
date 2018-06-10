#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,n,count,i,j,k;
   string str[]={"Beginner","Junior Developer","Middle Developer","Senior Developer","Hacker","Jeff Dean"};
   map<int,int> mp;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
              count=0;
            for(j=0;j<5;j++)
               {
                  cin>>k;
                  count=count+k;
               }
               mp[i]=count;
        }
        for(i=0;i<n;i++)
        {
            cout<<str[mp[i]]<<"\n";
        }
   return 0;
}
