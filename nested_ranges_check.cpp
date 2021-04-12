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

struct range {
    ll s,e;
    ll container=0,contained=0;
    ll id;
};

bool compare (range a, range b){
    if(a.s==b.s) return a.e>b.e;
    else return a.s<b.s;
}

bool compareid (range a,range b){
    return a.id<b.id;
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	
	{
        ll n;
        cin>>n;
        range a[n];
        rep(i,n){
            cin>>a[i].s>>a[i].e;
            a[i].id =i;
        }
        sort(a,a+n,compare);
        vector<int> ans1(n), ans2(n);
	    ordered_set<array<ll,2>> os1, os2;
	    for (int i = 0, j = n - 1; i < n; i++, j--) {
		    ans1[a[j].id] = os1.order_of_key({a[j].e + 1, -1});
		    ans2[a[i].id] = i - os2.order_of_key({a[i].e, -1});
		    os1.insert({a[j].e, j});
		    os2.insert({a[i].e, i});
	    }
	for (int x : ans1) cout << (x > 0) << " ";
	cout << "\n";
	for (int x : ans2) cout << (x > 0) << " ";
	cout << "\n";   
	}
		
	
        
}
