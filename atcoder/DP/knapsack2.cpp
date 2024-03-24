#include <bits/stdc++.h>
#define int long long
#define FOR(i, a, b) for(int i=(a); i<=(b);++i)
#define FOD(i, a, b) for(int i=(a); i>=(b);--i)
#define REP(n) for(int i=0; i<=(n);++i)
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FILE_IO(filein, fileout) freopen((filein), "r", stdin);freopen((fileout), "w", stdout);
using namespace std;
#define f first
#define s second
const int N=10000007;

int dp[10000][10000];
pair <int, int> ar[N];

int32_t main(void){
    int N,W;
    cin >> N >> W;
    int grtVal = 0;

    for (int i = 1  ;i <= N ; ++i)
    {
        cin >> ar[i].f >> ar[i].s;
        grtVal += ar[i].s;
    }

    for (int i = 0 ; i <= N ; ++i)
    for (int v = 0 ; v <= grtVal; ++v)
    dp[i][v] = W + 1;
    for (int i = 1 ; i <= N; ++i)
    dp[i][0] = 0, dp[i][ar[i].s] = ar[i].f;

    for (int i = 1 ; i <= N; ++i)
    {
        for (int v =  1 ; v <= grtVal; ++v)
            {
                dp[i][v] = min(dp[i][v] , dp[i-1][v]);
                if (v >= ar[i].s)
                dp[i][v] = min(dp[i][v],dp[i-1][v - ar[i].s] + ar[i].f);
            }
    }

    int ans = 0;
    for (int v = 1 ; v <= grtVal;  ++v)
    if (dp[N][v] <= W)
    ans = v;

    cout << ans;

}