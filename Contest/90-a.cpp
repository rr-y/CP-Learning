/*
	Problem Statement ->
*/
#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace __gnu_pbds;
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
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

void solve(){
	int t; cin>>t;
	while(t--){
		int a, b, c; cin>>a>>b>>c;

		int ans1, ans2;

		if(a >= c)
			ans1 = -1;

		else{
			ans1  = c/a + 1;

		}

		
	
			int d = a/c + 1;
			ans2 = b*d;
	

		cout<<ans1<<' '<<ans2<<'\n';
	}
}


int32_t main()
{
	FIO;
	solve();
	return 0;
}