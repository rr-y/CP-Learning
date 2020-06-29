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

	int n, k; cin>>n>>k;
	mk(arr, n, int);

	for(int i=0;i<n;i++)
		cin>>arr[i];

	int gandola = 0;

	sort(arr, arr+n);
	int i = 0;
	while(i < n){
		if(i+1 < n){
			int w = arr[i] + arr[i+1];
			if(w <= k){
				gandola += 1;
				i += 2;
			}
			else{
				gandola += 1;
				i += 1;
			}
		}
		else{
			gandola += 1;
			i += 1;
		}
	}

	cout<<gandola<<'\n';

}


int32_t main()
{


	FIO;
	solve();
	return 0;
}