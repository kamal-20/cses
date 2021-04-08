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


struct node{
    node * next=NULL;
    ll val;

};

 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	
	{
        ll n,k;
        cin>>n>>k;
        if(k>=n){
            k%=n;

        }
        k++;
        k%=n;
        vl v(n);
        node * p,*q;
        p= q = new node;
        p->val=1;
        repf(i,2,n){
            p->next= new node;
            p=p->next;
            p->val=i;
        }
        p->next=q;
        for(ll c= n;c>1;--c){
            for(ll i=0;i<k-1;i++)
                p=p->next;
            cout<<p->next->val<<" ";
            p->next=p->next->next;
        }
        cout<<p->val<<"\n";

			
	}
		
	
        
}
