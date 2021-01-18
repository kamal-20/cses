#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")

#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define mod 1000000007
#define rep(i, n) for(ll i = 0;i<n;++i)
#define repf(i,k,n) for (ll i = k; i <= n; ++i) 
#define repr(i,k,n) for (ll i = k; i >= n; --i) 
#define test() ll cases; cin>>cases; while(cases--)

 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    test(){
        ll a,b;
        cin>>a>>b;
       if(a<b)swap(a,b);
        if(a>2*b){
            cout<<"NO\n";
        }else{
            a%=3,b%=3;
            if(a<b)swap(a,b);
            if((a==2 && b==1) || (a==b && b==0)){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
         }}
}

        
}