#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef vector < long long > vll;
typedef pair < long long, long long > pll;
typedef pair < int, int > pii;
typedef vector < int > vi;
typedef vector<vi> vvi;
typedef vector<pii> vpii;
#define rep(i,n) for(int i = 0; i < n; i++)
#define reps(i,a,n) for(int i = a; i < n; i++)
#define traverse(container, it) \
      for(typeof(container.begin()) it = container.begin(); it != container.end(); it++)
#define csl ios_base::sync_with_stdio(false); cin.tie(NULL)
#define all(x) x.begin(),x.end()
#define MOD 1000000007
#define SIZE 5009

int main()
{
	int t,n,i,ar[100008],j=0,median=0,b[100008],k,l;
	vi arr;
	scanf("%d",&t);
	while(t--)
	{
	   scanf("%d",&n);
	   if(n<=3)

{
	   for(i=0;i<(2*n);i++)
	   	scanf("%d",&ar[i]);
	   	sort(ar,ar+2*n);
	   	j=1;
	   	for(i=(2*n-1);i>=0;i--)
	   	{
	   	         if(j==((n+1)/2))
	   	              {
	   	                 median=ar[i];
	   	                 break;
	   	               }
	   	         j++;
	   	}
	   	j=((n+1)/2)-1;
	   for(k=i;k>(2*j);k--)
	   {
	   	         ar[k]=ar[k-1];
	   }
          ar[k]=median;
	   	  printf("%d\n",median);
	   	  for(i=0;i<(2*n);i++)
	   	  printf("%d ",ar[i]);
	   	  printf("\n");
}
	   	  else
	   	  {
	   	  	                arr.clear();
		               int barr[100009];
		arr.resize(2*n);

		rep(i,2*n)
			cin>>arr[i];

		sort(all(arr));

		j = 0,k = n,l=0;
		while(j < n && k < 2*n){
			barr[l]=(arr[j]);
			l++;
			barr[l]=(arr[k]);
			++j; ++k;
			l++;
		}

		cout<<max(barr[n],barr[n+1])<<endl;
		rep(i,2*n)
			cout<<barr[i]<<" ";
		cout<<endl;
	   	  }
	}
} 
