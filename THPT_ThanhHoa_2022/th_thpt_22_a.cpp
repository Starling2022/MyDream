#include <bits/stdc++.h>
#define int long long
#define FOR(i, a, b) for(int i=(a); i<=(b);++i)
#define FOD(i, a, b) for(int i=(a); i>=(b);--i)
#define REP(n) for(int i=0; i<=(n);++i)
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FILE_IO(filein, fileout) freopen((filein), "r", stdin);freopen((fileout), "w", stdout);
using namespace std;
const int N=10000007;

int a, b, c, d;

int max(int a, int b){
    if(a > b)   return a;
    else return b;
}

// int abs(int a){
//     if(a>0) return a;
//     return -a;
// }

int32_t main(){
    FAST;
    FILE_IO("ROBOT.INP", "ROBOT.OUT");
    cin >> a >> b >> c >> d;
    cout << max(abs(b-d), abs(a-c));
}
