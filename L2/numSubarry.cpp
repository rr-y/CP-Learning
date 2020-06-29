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
	
	int sum = 0, count = 0, ptr2 = 0;
	for(int i=0;i<n;i++){
		sum += arr[i];
		if(sum == k){
			count++;
			sum -= ptr2;
			ptr2 += 1;
		}

		else if(sum > k && ptr2 < i){
			sum -= ptr2;
			ptr2 += 1;

			if(sum == k){
				count++;
				sum -= ptr2;
				ptr2 += 1;
			}
		}
	}

	cout<<count<<'\n';
}


int32_t main()
{


	FIO;
	solve();
	return 0;
}