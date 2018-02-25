#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int t,n,i,r,b;
    cin>>t;
    while(t--)
    {
         cin>>n;
         if(n==1)
         cout<<"0\n";
         else if(n==2)
         cout<<"2\n";
         else{
        n=n-1;
        i=1;b=0;
   while(n != 0) {
        r = n%5;
        n = n/5;
        b= b+ (r*i);
        i = i*10;
    }
    cout<<2*b<<"\n";

    }
    }
    return 0;
}
