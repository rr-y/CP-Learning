//Problem Link -> 

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
	int n, m, k; cin>>n>>m>>k;
	mk(arr, n, int);
	mk(apartment, m, int);

	for(int i=0;i<n;i++){
		cin>>arr[i];
	}

	for(int i=0;i<m;i++)
		cin>>apartment[i];

	int count = 0;
	int j = 0;

	sort(arr, arr+n);
	sort(apartment, apartment+m);
	for(int i=0;i<n;i++){

		while(j < m && apartment[j] < arr[i]-k)
			j++;

		if(j < m && arr[i]-k <=  apartment[j] && arr[i] + k >=  apartment[j]){
			count++;
			j++;

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