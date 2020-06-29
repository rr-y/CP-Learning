// Problem -> Warmup question: 1 to n numbers, one missing, and one coming twice, find missing one.


#include<bits/stdc++.h>
using namespace std;
#define ff              first
#define ss              second
#define int             long long
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define pqb             priority_queue<int>
#define pqs             priority_queue<int,vi,greater<int> >
#define setbits(x)      __builtin_popcountll(x)
#define zrobits(x)      __builtin_ctzll(x)
#define mod             1000000007
#define inf             1e18
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
// mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

void solve(){
	int n; cin>>n;
	mk(arr, n, int);
	int sum = 0, sumsquare = 0;
	for (int i = 0; i < n; ++i)
	{
		cin>>arr[i];
		sum += arr[i];
		sumsquare += (arr[i]*arr[i]);
	}

	cout<<sum<<' '<<sumsquare<<'\n';
	int x, y, xminy, xplusy;
	xminy = sum - ((n*(n+1))/2);
	xminy = abs(xminy);
	xplusy = ((sumsquare) - ((n*(n+1)*(2*n+1))/6))/xminy;
	xplusy = abs(xplusy);
	cout<<xplusy<<' '<<xminy<<'\n';
	x = (xplusy + xminy)/2;
	y = (xplusy - xminy)/2;

	cout<<abs(x)<<' '<<abs(y)<<'\n';

}


int32_t main()
{


	FIO;
	solve();
	return 0;
}