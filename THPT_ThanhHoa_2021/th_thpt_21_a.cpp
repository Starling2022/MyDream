#include <bits/stdc++.h>
#define int long long
#define FOR(i, a, b) for(int i=(a); i<=(b);++i)
#define FOD(i, a, b) for(int i=(a); i>=(b);--i)
#define REP(n) for(int i=0; i<=(n);++i)
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define file(text) freopen(text ".INP", "r", stdin); freopen(text ".OUT", "w", stdout);
#define int long long
using namespace std;
const int N=10000007;
int n, a, b;

int min_x(){
    if(a<=b)    return 0;
    else return a-b;
}
int max_x(){
    if(a+b<=n) return a;
    else return n-b;
}

int32_t main(){
    FAST;
    file("BAI1");
    cin >> n >> a >> b;
    cout << min_x() << " " << max_x();
}
