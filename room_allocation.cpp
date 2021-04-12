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


 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	
	{
        ll n;
        cin>>n;
        vector<array<int,3>> a(n);
        for (int i = 0; i < n; i++) {
            int l, r; cin >> l >> r;
            a[i] = {l, r, i};
        }
        sort(a.begin(), a.end());
        vector<int> ans(n);
        priority_queue<array<int,2>,vector<array<int,2>>,greater<array<int,2>>> pq;
        for (auto [l, r, i] : a) {
            if (pq.empty() || l <= pq.top()[0]) {
                ans[i] = pq.size() + 1;
            } else {
                ans[i] = pq.top()[1];
                pq.pop();
            }
            pq.push({r, ans[i]});
        }
        cout << pq.size() << "\n";
        for (int x : ans) cout << x << " ";
        cout << "\n";
        }
		
	
        
}
