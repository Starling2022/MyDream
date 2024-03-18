#include <bits/stdc++.h>
#define int long long
#define FOR(i, a, b) for(int i=(a); i<=(b);++i)
#define FOD(i, a, b) for(int i=(a); i>=(b);--i)
#define REP(n) for(int i=0; i<=(n);++i)
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FILE_IO(filein, fileout) freopen((filein), "r", stdin);freopen((fileout), "w", stdout);
using namespace std;
const int N=10000007;

int a[N],b[N];

int call_me_baby(int n){
    int min_val=N;
    int i=1, j=1;
    while(i < n && j < n){
        int sum_val = a[i]+b[j];
        min_val = min(min_val, abs(sum_val));
        if(sum_val < 0)
            ++i;
        else
            ++j;
        //cout << "min:" << min_val << " || sum:" << sum_val << "\n";
    }
    return min_val;
}

int32_t main(void){
    FAST;
    //FILE_IO("TROCHOI.INP", "TROCHOI.OUT");    //Bỏ // nếu muốn chạy bằng file;
    int n; cin >> n;
    FOR(i,1,n)  cin >> a[i];
    FOR(i,1,n)  cin >> b[i];
    sort(a+1, a+1+n);
    sort(b+1, b+1+n);
    cout << call_me_baby(n);
}