#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;
typedef std::vector<int> vi;
typedef std::vector<ll> vll;
typedef std::pair<int,int> ii;
#define debg(x)	std::cerr<<(#x)<<" => "<<x<<'\n';
#define debgg(x,y)	std::cerr<<(#x)<<" => "<<x<<'\t'<<(#y)<<' '<<y<<'\n';
#define len(a) (int)(a).size()
#define all(x) x.begin(),x.end()
const int mod = 1'0000'0000'7;
//const int mod = 998244353;

bool comp (int x, int y) {
    return x > y;
}
void printarr (int arr[], int n) {
    for(int i = 0; i < n; ++i)
        std::cerr<<arr[i]<<(i<n-1?' ':'\n');
}
template < typename T> void  printv (T &a) {
    for (auto it = a.begin(); it != a.end(); ++it)
        std::cerr<<*it<<' ';
    std::cerr<<'\n';
}
    

const int maxn = 200009;
//int t[510][510];
ll ans;
int arr[maxn];


void solve ()
{
    ans = 0;
    bool ok = false;
    int n,m,k,q;  std::cin>>n;
    //string  s;  cin>>s;
    for (int i = 0; i < n;++i) {
        std::cin>>arr[i];
    }
    std::cout<<(ok?"YES":"NO");
    std::cout<<'\n';
}
void sol ()
{
    //test
}

int main ()
{
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(0);
    auto begin = std::chrono::high_resolution_clock::now();

    //cout << setprecision(15) << fixed;
    int testcases = 1;  
    std::cin>>testcases;
    for (int t = 0; t < testcases; ++t)
        solve();

		auto end = std::chrono::high_resolution_clock::now();
		cerr << setprecision(4) << fixed;
	    cerr << "Execution time: " << std::chrono::duration_cast<std::chrono::duration<double>>(end - begin).count() << " seconds" << endl;
    return 0;
}


/*
Tuesday 06 April 2021 05:17:23 PM IST
     author:   __astrainL3gi0N
*/
