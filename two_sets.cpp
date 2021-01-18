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
#define test() ll cases; cin>>cases; while(cases--)

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n;
    cin>>n;
    ll sum = (n*(n+1))/2;
    if(sum%2){
        cout<<"NO\n";
    }else{
        cout<<"YES\n";
        vi a,b;
        if((sum/2)%n==0){
            repf(i,1,n/2){
                if(i%2){
                    a.PB(i);
                    a.PB(n-i);
                }else{
                    b.PB(i);
                    b.PB(n-i);
                }
            }
            b.PB(n);
        }else{
            repf(i,1,n/2){
                    if(i%2){
                        a.PB(i);
                        a.PB(n-i+1);
                    }else{
                        b.PB(i);
                        b.PB(n-i+1);
                    }
                }
            }
        cout<<a.size()<<"\n";
        rep(i,a.size()) cout<<a[i]<<" ";
        cout<<"\n"<<b.size()<<"\n";
        rep(i,b.size()) cout<<b[i]<<" ";
    }

        
    }