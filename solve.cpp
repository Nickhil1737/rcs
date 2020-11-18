#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef vector<int> vi;
typedef vector<ll> vll;
typedef pair<int,int> ii;
#define see(x)	cerr<<(#x)<<" => "<<x<<'\n';
#define see2(x,y)	cerr<<(#x)<<" => "<<x<<'\t'<<(#y)<<' '<<y<<'\n';
#define len(a) (int)(a).size()
#define all(x) x.begin(),x.end()
#define mod 10000007
//#define mod 998244353

void printarr(int arr[], int n){
    for(int i = 0; i < n; ++i)
        cout<<arr[i]<<(i<n-1?' ':'\n');
}
template < typename T> void  printv(T &a){
    for(auto it = a.begin(); it != a.end(); ++it)
        cout<<*it<<' ';
    cout<<'\n';
}
    

//int t[510][510];
ll ans;
int arr[300009];

void solve()
{
    bool ok = false;
    int n,m,k;  cin>>n;
    for(int i = 0; i < n;++i){
        cin>>arr[i];
    }
    ans = 0;

    cout<<'\n';
}
void sol()
{
    //test
}
void fastio(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
}

int main()
{
    //fastio();
    fastio();
    int testcases;  cin>>testcases;
    for(int t = 0; t < testcases; ++t)
        solve();
    return 0;
}
