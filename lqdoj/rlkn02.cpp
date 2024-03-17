#include <bits/stdc++.h>
#define int long long
#define FOR(i, a, b) for(int i=(a); i<=(b);++i)
#define FOD(i, a, b) for(int i=(a); i>=(b);--i)
#define REP(n) for(int i=0; i<=(n);++i)
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FILE_IO(filein, fileout) freopen((filein), "r", stdin);freopen((fileout), "w", stdout);
using namespace std;
const int N=10000007;

int32_t main(){
    FAST;
    int a,b,u,v,dai,rong;
    cin >> a >> b >> u >> v;
    dai= u-a;
    rong= b-v;
    cout << (dai+rong)*2 << "\n" << dai*rong;
}