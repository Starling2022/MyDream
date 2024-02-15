#include <bits/stdc++.h>
#define int long long
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define FOR(i, a, b) for(int i = (a) ; i <= (b) ; ++i)
using namespace std;
const int max_value = 1e6, MOD = 1e9+7;

int dp[1000][1000];
int n,m;

int32_t main(){
    FAST;
    cin >> n >> m;
    FOR(i, 1, m)  dp[0][i]=1;
    FOR(i, 1, n)  dp[i][0]=1;
    FOR(i, 1, n)
      FOR(j, 1, m)
        dp[i][j] = dp[i-1][j] + dp[i][j-1];
    cout << dp[n][m] << "\n";
}