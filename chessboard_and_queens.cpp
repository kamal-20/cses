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

bool check_valid(vector<string> &board,ll r,ll c){
    if(board[r][c]=='*') return false;
    int i, j; 
  
    for (i = 0; i < c; i++) 
        if (board[r][i]=='q') 
            return false;

    for (i = 0; i < r; i++) 
        if (board[i][c]=='q') 
            return false; 

    for (i = r, j = c; i >= 0 && j >= 0; i--, j--) 
        if (board[i][j]=='q') 
            return false; 
  
    for (i = r, j = c; i >= 0 && j < 8; i--, j++) 
        if (board[i][j]=='q') 
            return false; 
  
    return true; 
}
    
void backtrack(vector<string> &board,ll r,ll &cnt){
    if(r>=8){
         cnt++;
         return;
    }
    repf(j,0,7){
            if(check_valid(board,r,j)){
                board[r][j]='q';
                backtrack(board,r+1,cnt);
                board[r][j]='.';
            }
        }
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
	
	{
        vector<string> board(8);
        rep(i,8){
            cin>>board[i];
        }
        ll cnt=0;
        backtrack(board,0,cnt);
        cout<<cnt<<"\n";
	}
		
	
        
}
