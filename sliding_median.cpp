/*#### copied code #####*/  


#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

#include <bits/stdc++.h>
using namespace std;


#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
template <class T> using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <class K, class V> using ordered_map = tree<K, V, less<K>, rb_tree_tag, tree_order_statistics_node_update>;
typedef tree<long long, null_type, less_equal<long long>, rb_tree_tag, tree_order_statistics_node_update>Ordered_set;

typedef long long ll;
typedef vector<ll> vl;
typedef pair<ll,ll> pl;
typedef map<ll,ll> mll;
typedef map<ll,vector<ll>> mlvl;
typedef map<ll,string> mls;
typedef map<string,string> mss;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define mod 1000000007
#define rep(i, n) for(ll i = 0;i<n;++i)
#define repf(i,k,n) for (ll i = k; i <= n; ++i) 
#define repr(i,k,n) for (ll i = k; i >= n; --i) 
#define T ll cases; cin>>cases; while(cases--)
#define inar(a,n) rep(i,n) {cin>>a[i];}
#define inv(v,n) ll val; rep(i,n){cin>>val; v.PB(val);} 

long N, M;

long arr[200010];

multiset<long> up;

multiset<long> low;


void ins(long val){ 

	long a = *low.rbegin(); 

	if(a < val){

		up.insert(val);

		if(up.size() > M/2){

			low.insert(*up.begin());

			up.erase(up.find(*up.begin()));

		}

	}

	else{

		low.insert(val);

		if(low.size() > (M + 1)/2){

			up.insert(*low.rbegin());

			low.erase(low.find(*low.rbegin()));

		}

	}

}


void er(long val){ // erase from sets

	if(up.find(val) != up.end()) up.erase(up.find(val));

	else low.erase(low.find(val));

	if(low.empty()){

		low.insert(*up.begin());

		up.erase(up.find(*up.begin()));

	}

}


int main() {

	cin >> N >> M;

	for(int i = 0; i < N; i++) cin >> arr[i];

	low.insert(arr[0]); for(int i = 1; i < M; i++) ins(arr[i]);

	cout << *low.rbegin() << " ";

	for(long i = M; i < N; i++){

		if(M == 1){

			ins(arr[i]);

			er(arr[i - M]);

		}

		else{

			er(arr[i - M]);

			ins(arr[i]);

		}

		cout << *low.rbegin() << " ";

	}

	cout << endl;

}
