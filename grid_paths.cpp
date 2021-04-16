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
        vector<vector<bool>> trap(n+1,vector<bool> (n+1,false));
        repf(i,1,n){
            repf(j,1,n){
                char val;
                cin>>val;
                if(val=='*')
                trap[i][j]=true;
            }
        }
        vector<vector<int>> dp(n+1,vector<int> (n+1,0));
        dp[1][1]=1;
        repf(i,1,n){
            repf(j,1,n){
                if(trap[i][j]) {
                    dp[i][j]=0;
                    continue;
                }
                (dp[i][j]+=dp[i][j-1])%=mod;
                (dp[i][j]+=dp[i-1][j])%=mod;

            }
        }
        cout<<dp[n][n]<<"\n";
			
	}
		
	
        
}
