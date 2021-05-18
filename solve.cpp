#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef std::vector<int> vi;
typedef std::pair<int,int> ii;
typedef std::vector<ii> vii;
typedef std::vector<ll> vl;

#define pb push_back
#define mp make_pair
#define debg(x)	std::cerr<<(#x)<<" => "<<x<<'\n';
#define debgg(x,y)	std::cerr<<(#x)<<" => "<<x<<'\t'<<(#y)<<' '<<y<<'\n';
#define len(a) (int)(a).size()
#define all(x) x.begin(),x.end()
const int mod = 1000000007;
//const int mod = 998244353;

bool comp (int x, int y) {
    return x > y;
}
template < typename T> void  printv (T &a) {
    for (auto it = a.begin(); it != a.end(); ++it)
        cout<<*it<<' ';
    cout<<'\n';
}
int gint() {
    int n;  cin>>n;
    return n;
}
//int t[510][510];
ll ans;

void solve () {
    map <int,int> freq;
    set <int> hsh;
    ans = 0;
    bool ok = false;
    int n = gint();
    vi arr(n);
    //string  s;  cin>>s;
    for (int i = 0; i < n;++i) {
        arr[i] = gint();
    }

    cout<<(ok?"Yes":"No");
    cout<<'\n';
}
void sol () {
    //test
    //cout << setprecision(15) << fixed;
}

int main () {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int testcases = 1;  
    testcases = gint();
    for (int t = 0; t < testcases; ++t) {
        //cout<<"Case #"<<t+1<<": ";
        solve();
    }

    return 0;
}
