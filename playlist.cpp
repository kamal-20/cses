#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

#include <bits/stdc++.h>
using namespace std;
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
        ll a[n];
        map<ll, ll> index;
        ll ans = 0;
        for (ll i = 0, j = 0; i < n; i++) {
            cin>>a[i];
            j = max(index[a[i]], j);
            ans = max(ans, i - j + 1);

        index[a[i]] = i + 1;
    }
        cout<<ans<<"\n";


	}
		
	
        
}
