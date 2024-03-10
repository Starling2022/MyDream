#include <bits/stdc++.h>
#define FOR(i, a, b) for(int i=(a); i<=(b);++i)
#define FOD(i, a, b) for(int i=(a); i>=(b);--i)
#define REP(n) for(int i=0; i<=(n);++i)
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FILE_IO(filein, fileout) freopen((filein), "r", stdin);freopen((fileout), "w", stdout);
using namespace std;
const int N=10000007;

int n, a[N], cnt, sum_r;

void solve(){
    cin >> n;
    FOR(i,1,n){
        cin >> a[i];
        if(a[i]%3==0 && a[i]!=0){
            ++cnt;
            sum_r+=a[i];
            //cout << cnt << " " << sum_r << " i " << i << " a[i] " << a[i] << endl;
        }
    }
    cout << cnt << "\n" << (sum_r-cnt*3)/3;
}

int32_t main(){
    FILE_IO("CANDIES.INP", "CANDIES.OUT");
    FAST;
    solve();
}
