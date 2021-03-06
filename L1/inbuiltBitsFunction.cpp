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
	int x = 21;

	cout<<__builtin_parityll(x)<<'\n';    // checks the parity of the number if num of set bits are even then parity 0 otherwise parity is odd
	cout<<__builtin_ctzll(x)<<'\n';       // number of set bits after first set bit from left side
	cout<< __builtin_clzll(x)<<'\n';
	cout<<__builtin_popcountll(x)<<'\n';  // number of set bits in x
}


int32_t main()
{
	FIO;
	solve();
	return 0;
}


//These are O(1) functions