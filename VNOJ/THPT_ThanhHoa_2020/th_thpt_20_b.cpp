#include <bits/stdc++.h>
#define int long long
#define FOR(i, a, b) for(int i=(a); i<=(b);++i)
#define FOD(i, a, b) for(int i=(a); i>=(b);--i)
#define REP(n) for(int i=0; i<=(n);++i)
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
using namespace std;
const int N=10000007;

int n, cnt[N], a[N], res;

int32_t main(){
    FAST;
    freopen("CAU2.INP", "r", stdin);
    freopen("CAU2.OUT", "w", stdout);
    cin >> n;
    FOR(i, 1, n){
        cin >> a[i];
        cnt[a[i]]++;
        if(res<cnt[a[i]])   res=cnt[a[i]];
    }
    cout << res;
}
