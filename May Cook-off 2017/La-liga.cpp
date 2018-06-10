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

int main(){
	int t,n,i,j;
	map<string,int> mp;
	string a[4];
	scanf("%d",&t);
	while(t--)
	{
		for(i=0;i<4;i++)
		{
            cin>>a[i]>>j;
            mp[a[i]]=j;
		}
		sort(a,a+4);

		if((mp[a[0]] > mp[a[1]]) &&(mp[a[2]]>mp[a[3]]))
			printf("Barcelona\n");
		else
			printf("RealMadrid\n");

	}


	return 0;
}
