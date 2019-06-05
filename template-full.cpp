/**
 *   author: bholuakku
**/

#include <bits/stdc++.h>
#define For(i,a,b) for(i=(a); i<(b); i++)
#define rep(i,n) for(i=0; i<(n); i++)
#define Nfor(i,a,b) for(i=(a)-1; i>=(b); i--)
#define dep(i,n) for(i=(n-1);i>=0; i--)
#define mp make_pair
#define pb push_back
#define Auto(a) for(auto &val : a)
#define X first
#define Y second
#define MOD 1000000007
#define MOD1 998244353
#define iterate(A, i) for(auto i = A.begin(); i!=A.end(); i++)
#define mset(A,val,n) memset(A, val, n*sizeof(int))
#define Endl cout<<"\n"
#define Test cout<<"Hello\n"

using namespace std;

typedef unsigned long long ull;
typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef vector<ll> vl;
typedef vector<vector<ll> > vvl;
typedef vector<bool> vb;
typedef vector<vector<bool> > vvb;
typedef pair<int, int> pii;
typedef vector<vector<pair<int, int> > > vvp;

int power(ll x, ll y, ll p) { ll res = 1; x = x % p; while (y>0){ if (y & 1) res = (res*x) % p; y = y>>1; x = (x*x)%p;} return res;}
int modInverse(ll n) {ll p = MOD;return power(n, p-2, p);}
int min(int a, int b, int c) { return min(a, min(b, c)); }
int max(int a, int b, int c) { return max(a, max(b, c)); }
inline void swap(int &a, int &b) { int t = a; a = b; b = t;}
bool cmp(int a, int b){return a>b;}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
        freopen("C:\\Users\\ACER\\Desktop\\Codes\\input.txt", "r", stdin);
    #endif
    cin>>t;
    while(t--){
        cin>>n;

    }
    return 0;
}
