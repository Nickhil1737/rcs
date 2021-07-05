#include <bits/stdc++.h>
using namespace std;

int rnd(int a, int b) {
    return a + rand() % (b - a + 1);
}
int generator() {
    // This function acts as a generator.
    int w = rnd(1, 100);
    return w;
}

void genGraph (int n, int m) {
    set <pair<int,int>> st;
    cout<<n<<'\n';
    cout<<m<<'\n';
    for (int i = 1; i < n+1; ++i)
    st.insert(make_pair(i,i));
    while (m--) {
        int u = rnd(1,n);
        int v = rnd(1,n);
        if (st.count(make_pair(u,v)) || st.count(make_pair(v,u)))
            m++;
        else {
            st.insert(make_pair(u,v));
            cout<<u<<' '<<v<<'\n';
        }
    }
}
int main() {
    srand(time(0));
    int n = rnd(1,20);
    cout<<n<<'\n';

    while (n--) {
        int u = generator();
        int v = generator();
        cout<<u<<' '<<v<<'\n';
    }
}
