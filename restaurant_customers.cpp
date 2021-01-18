#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef vector<int> vi;
typedef pair<int,int> pi;
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define mod 1000000007
#define rep(i, n) for(ll i = 0;i<n;++i)
#define repf(i,k,n) for (ll i = k; i <= n; ++i) 
#define repr(i,k,n) for (ll i = k; i >= n; --i) 
#define test ll cases; cin>>cases; while(cases--)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
          ll n;
    cin>>n;
    vector<pair<int,bool>> v;
    ll x; ll y;
    while(n--){
    	cin>>x;cin>>y;
    	v.PB(make_pair(x,true));
    	v.PB(make_pair(y,false));
    }
   	sort(v.begin(),v.end());
   	ll ans =0; ll maxx =0;
   	for(int i=0;i<v.size();i++){
   		if(v[i].second==true){
   			ans++;
   			maxx = max(ans,maxx);
   		}else{
   			ans--;
   		}
   	}
   	cout<<maxx<<endl;

        
    }