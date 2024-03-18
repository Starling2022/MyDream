#include <bits/stdc++.h>
#define int long long
#define FOR(i, a, b) for(int i=(a); i<=(b);++i)
#define FOD(i, a, b) for(int i=(a); i>=(b);--i)
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FILE_IO(filein, fileout) freopen((filein), "r", stdin);freopen((fileout), "w", stdout);
using namespace std;
const int N=10000007;
int a[N];
//SU DUNG THUAT TOAN TRAU CAY:))
int dp(int n) {
    int res = 0;
    FOR(i,1,n) {
        int max_val = a[i], min_val = a[i];
        FOD(j,i,1) {
            max_val = max(max_val, a[j]);
            min_val = min(min_val, a[j]);
            res += max_val - min_val;
            //cout << "--FOD-- " << j << "-- " << "max: " << max_val << " || min: " << min_val << " || res: " << res << "\n";
        }
        //cout << "--FOR-- " << i << "-- " << "max: " << max_val << " || min: " << min_val << " || res: " << res << "\n";
    }
    return res;
}

int32_t main(void) {
    FAST;
    //FILE_IO("BONUS.INP", "BONUS.OUT");    //Bỏ // nếu muốn chạy bằng file;
    int n; cin >> n;
    FOR(i,1,n)    cin >> a[i];
    cout << dp(n) << "\n";
}
