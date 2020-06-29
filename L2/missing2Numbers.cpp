// Problem ->N numbers, all occurring twice, 2 occurring once, find them without using extra space.

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

	int xrval = 0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		xrval ^= arr[i];
	}

	int setbit;
	for(int i=0;i<32;i++){
		if(xrval>>i & 1){
			setbit = i;
			break;
		}
	}

	int grp1 = 0, grp2 = 0;
	for(int i=0;i<n;i++){
		if(arr[i]>>setbit & 1) grp1 ^= arr[i];
		else grp2 ^= arr[i];
	}

	cout<<grp1<<' '<<grp2<<'\n';

}


int32_t main()
{


	FIO;
	solve();
	return 0;
}