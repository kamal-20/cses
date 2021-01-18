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

struct movie{
    ll s,e;
};

bool compare(movie a, movie b){
    return a.e<b.e;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin>>n;
    movie arr[n];
    rep(i,n){
        cin>>arr[i].s>>arr[i].e;
    }
    sort(arr,arr+n,compare);
    //rep(i,n) cout<<arr[i].s<<" "<<arr[i].e<<"\n";
    ll count=1;
    movie last = arr[0]; 
    repf(i,1,n-1){
        if(arr[i].s>=last.e){
            count++;
            last=arr[i];
        }
    }
    cout<<count<<"\n";
        
    }