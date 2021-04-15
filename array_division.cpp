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

bool check(ll mid,ll a[],ll n,ll k){
   ll groups = 0;
            ll sum = 0;
            rep(i,n) {
                if (a[i] > mid) {
                    return false;
                }
                if (sum + a[i] > mid) {
                    ++groups;
                    sum = 0;
                }
                sum += a[i];
            }
            if (sum > 0) {
                ++groups;
            }
            return groups <= k;

}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	
	{
        ll n,k;
        cin>>n>>k;
        ll a[n];
        inar(a,n);
        ll lo = 0, hi = (ll) 1e18, ans = 0;
        auto works = [&] (ll mid) {

            
        };
        while (lo <= hi) {
            ll mid = (lo + hi) / 2;
            if (check(mid,a,n,k)) {
                hi = mid - 1;
                ans = mid;
            }
            else {
                lo = mid + 1;
            }
        }
        cout << ans << '\n';
			
	}
		
	
        
}
