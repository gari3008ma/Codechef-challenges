#include<bits/stdc++.h>
using namespace std;
#define M 1000000007
int main()
{
	long long int t,i,j,k,n,m,arr[100000],brr[100000],crr[100000],tmp,sum;
	scanf("%lld",&t);
	while(t--)
	{
			scanf("%lld %lld%lld",&n,&m,&k);
			for(i=0;i<n;i++)
				cin>>arr[i];
			for(i=0;i<m;i++)
				cin>>brr[i];
			for(i=0;i<k;i++)
				cin>>crr[i];
			sort(arr,arr+n);
			sort(brr,brr+m);
			sort(crr,crr+k);
			sum=0;
			tmp=0;
			for(i=0;i<m;i++)
			{
				j=0;
				tmp=0;
				while(j<n && arr[j]<=brr[i])
				{

					tmp=(tmp+arr[j]+brr[i])%M;
					j++;
				}
				j=0;
				while(j<k && crr[j]<=brr[i])
				{
					sum=(sum+tmp*(crr[j]+brr[i]))%M;
					j++;
				}

			}
			printf("%lld\n",sum);
	}
}
 
