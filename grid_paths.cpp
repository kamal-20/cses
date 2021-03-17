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

vector<vl> board(7,vector<ll> (7,0));

bool check(ll r,ll c){
    if(r<0 || r>6 || c<0 || c>6) return false;
    if(board[r][c]) return false;
    return true;
}

void recurse(string &s,ll r,ll c,ll l,ll &cnt){
    if(r==6 && c==0 && l>=48){
        cnt++;
        cout<<cnt<<"\n";
        return;
    }
    board[r][c]=1;
    if(s[l]!='?'){
        switch (s[l])
        {
        case 'D':
            if(check(r+1,c)){
            recurse(s,r+1,c,l+1,cnt);
            board[r+1][c]=0;
            }
            return;
            break;
        case 'U':
            if(check(r-1,c)){
            recurse(s,r-1,c,l+1,cnt);
            board[r-1][c]=0;
            }
            return;
            break;
        case 'R':
            if(check(r,c+1)){
            recurse(s,r,c+1,l+1,cnt);
            board[r][c+1]=0;
            }
            return;
            break;
        case 'L':
            if(check(r,c-1)){
            recurse(s,r,c-1,l+1,cnt);
            board[r][c-1]=0;
            }
            return;
            break;    
        default:
            break;
        }
    }
    else{
    if(check(r-1,c)){
        recurse(s,r-1,c,l+1,cnt);
        board[r-1][c]=0;
    }
    if(check(r,c+1)){
        recurse(s,r,c+1,l+1,cnt);
        board[r][c+1]=0;
    }
    if(check(r+1,c)){
        recurse(s,r+1,c,l+1,cnt);
        board[r+1][c]=0;
    }
    if(check(r,c-1)){
        recurse(s,r,c-1,l+1,cnt);
        board[r][c-1]=0;
    }
    }
    

}

 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	{
        string s="";
        cin>>s;
    ll cnt=0;
        recurse(s,0,0,0,cnt);
        cout<<cnt<<"\n";
	}
		
	
        
}
