#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,n,arr[100000],i,ind,min;
   cin>>t;
   while(t--)
   {
       cin>>n;
       min=INT_MAX;
       ind=0;
       for(i=0;i<n;i++)
          {
               cin>>arr[i];
           }
        for(i=0;i<n;i++)
          {
               if(arr[i]<min)
               {
                       min=arr[i];
                       ind=i;
               }
           }
           cout<<ind+1<<"\n";
   }
   return 0;
}         
