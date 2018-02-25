#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,q,i,a[100003],k;
    cin>>n>>q;
            for(i=0;i<n;i++)
            {
                    cin>>a[i];
            }
            sort(a,a+n);
     while(q--)
     {
            cin>>k;
            if(n==1 &&k!=a[0])
              cout<<"No\n";
           else if(k<a[0])
            cout<<"No\n";
            else if(k>a[n-1])
            cout<<"No\n";
            else
              cout<<"Yes\n";
     }
    return 0;
}
 
