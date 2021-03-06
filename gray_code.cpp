#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<ll> vl;
typedef vector<string> vs;
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

string to_binary(ll i,ll n){
    string s="";
     repr(j,n-1,0) { 
        ll k = i >> j; 
        if (k & 1) 
            s+="1"; 
        else
            s+="0"; 
    } 
    return s;
}


 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	
	{
        ll n;
        cin>>n;
        for (int i = 0; i < (1 << n); i++) 
        {
            int val = (i ^ (i >> 1));
            
            bitset<32> r(val);
            
            string s = r.to_string();
            cout << s.substr(32 - n) <<"\n";
        }  
	}
		
	
        
}
