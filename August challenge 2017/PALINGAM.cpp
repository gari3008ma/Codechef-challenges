#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;
        int count[27],count1[27],i,j,flag=0;
        char ans;
        memset(count,0,sizeof(count));
        memset(count1,0,sizeof(count1));
        for(i=0;i<s1.length();i++)
        {
            count[s1[i]-'a']++;
            count1[s2[i]-'a']++;
        }
        for(i=0;i<26;i++)
        {
           if(count[i]>0 && count1[i]>0)
             {
                   flag=1;
                   ans='B';
             }
        }
        if(flag==0)
        {
        for(i=0;i<26;i++)
        {
           if(count[i]>=2)
             {
                   flag=1;
                   ans='A';
             }
        }
        }
        if(flag==1)
          cout<<ans<<"\n";
        else
          cout<<"B\n";
    }
}
