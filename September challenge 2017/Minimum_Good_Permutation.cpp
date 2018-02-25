#include<bits/stdc++.h>
using namespace std;
int main()
{
   int t,n,arr[100000],i,j,temp;
   cin>>t;
   while(t--)
   {
        cin>>n;
        for(i=0;i<n;i++)
          arr[i]=i+1;
          bool flag=false;
          if(n%2!=0)
              {
                n=n-1;
                flag=true;
              }
       for(i=0;i<n;i=i+2)
          {
               temp=arr[i];
               arr[i]=arr[i+1];
               arr[i+1]=temp;
           }
           if(flag && n!=0)
           {
                 temp=arr[n];
               arr[n]=arr[n-1];
               arr[n-1]=temp;
               n=n+1;
            }
            if(flag &&n==0)
              n=n+1;
            for(i=0;i<n;i++)
            cout<<arr[i]<<" ";
            cout<<"\n";
   }
   return 0;
}
