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
	int n, k; cin>>n>>k;
	string s; cin>>s;

	set<char> st;
	while(k--){
		char ch; cin>>ch;
		st.insert(ch);
	}

	// processing part
	int ans = 0;
	vi index;
	index.pb(-1);
	
	for(int i=0;i<n;i++){
		if(st.find(s[i]) == st.end()){
			index.pb(i);
		}	
	}

	index.pb(n);

	for(int i=0;i+1<index.size();i++){
		int a = index[i+1] - index[i]-1;
		ans += (a*(a+1))/2;
	}

	// output part
	cout<<ans<<'\n';


}


int32_t main()
{
	FIO;
	solve();
	return 0;
}

/*
	Problem Link -> https://codeforces.com/problemset/problem/1272/C

*/