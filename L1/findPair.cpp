#include<bits/stdc++.h>
// #include <ext/pb_ds/assoc_container.hpp>
// using namespace __gnu_pbds;
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

// typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;

void solve(){

	int n; cin>>n;
	vi arr1(n), arr2(n);

	for(int i=0;i<n;i++){
		cin>>arr1[i];	
	}

	for(int i=0;i<n;i++){
		cin>>arr2[i];	
	}

	//processing part
	mii hm;
	int ans = 0;

	for(int i=0;i<n;i++){
		int val = arr1[i] - arr2[i];
		hm[val] += 1;	
	}

	for(auto e : hm){
		ans += (e.ss*(e.ss+1))/2;
	}

	cout<<ans<<'\n';
}


int32_t main()
{
	FIO;
	solve();
	return 0;
}

/*

Problem Statement -> 
Given two array =f equal size n then find the pairs (i, j) such that 
	x[i] -x[j] = y[i]-y[j], where 0<=i<j<n

*/