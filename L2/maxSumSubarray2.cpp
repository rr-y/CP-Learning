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

	int n, a, b; cin>>n>>a>>b;

	mk(arr, n, int);

	for(int i=0;i<n;i++){
		cin>>arr[i];	
	}

	int maxSum;	
	multiset<int> s;

	vi prefix(n, 0);
	prefix[0] = arr[0];
	for(int i=1;i<n;i++){
		prefix[i] = prefix[i-1] + arr[i];
	}

	maxSum = prefix[a-1];

	for(int i=a;i<b;i++){
		maxSum = max(maxSum, prefix[i]);
	}

	for(int i=a;i<n;i++){
		s.insert(prefix[i-a]);
		int val = prefix[i] - (*s.begin());
		maxSum = max(maxSum, val);

		if( i >= b){
			s.erase(s.find(prefix[i-b]));
		}
	}

	cout<<maxSum<<'\n';
}


int32_t main()
{


	FIO;
	solve();
	return 0;
}