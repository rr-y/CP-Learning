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
#define inf             1e9
#define ps(x,y)         fixed<<setprecision(y)<<x
#define mk(arr,n,type)  type *arr=new type[n];
#define w(x)            int x; cin>>x; while(x--)
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
mt19937                 rng(chrono::steady_clock::now().time_since_epoch().count());

typedef tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update> pbds;


bool isComplete(string s, int curr){
	bool ok = true;
	for (int i = 0; i < s.length(); ++i)
	{
		if (s[i] == '+') curr += 1;
		else curr -= 1;

		if (curr < 0){
			ok = false;
			break;
		}
	}

	return ok;
}

int calAns(string s, int val){
	int res = 0;
	int times = 0;
	int curr;

	if(val-1 < s.length())
		curr = val-1;
	else
		curr = s.length();

	bool ok = false;
	int temp = curr;
	
	for (int i = 0; i < s.length(); ++i)
	{
		res += 1;
		if (s[i] == '+') curr += 1;
		else curr -= 1;

		if (curr < 0){
			ok = false;
			break;
		}
	}
	
	times = (res*(res+1))/2;
	if(temp == val-1)
		times += s.length();
	else
		times += (val-s.length())*s.length();
	return times;
}


void solve(){

	int t; cin>>t;
	while(t--){
		string s; cin>>s;

		int low = 0, high = inf;

		int ans;

		while(low <= high){
			int mid = low + (high-low)/2;

			if(isComplete(s, mid)){
				ans = mid;
				high = mid-1;
			}

			else{
				low = mid+1;
			}
		}

		// cout<<ans<<" ";
		if(ans != 0)
			cout<<calAns(s, ans)<<'\n';
		else
			cout<<s.length()<<'\n';
	}

}


int32_t main()
{
	FIO;
	solve();
	return 0;
}