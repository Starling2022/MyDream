#include <bits/stdc++.h>
using namespace std;
#define FOR(i,a,b) for(int i = (a); i <= (b); ++i)
const int N = 10000007;
//#define int long long;

int sum_val, n, m, u, v;
int a[N], prime[N], prefix[N];

void sangnguyento(){
    FOR(i,1,N) prime[i]=1;
    prime[0]=prime[1]=0;
    FOR(i,2,sqrt(N))
        if(prime[i]==1)
            for(int j=i*i; j <= N; j+=i)
                prime[j]=0;
}

void solve(){
    FOR(i,1,m){
        cin >> u >> v;
        cout << prime[prefix[v]-prefix[u-1]] << "\n";
        //cout << "prefix[v]-prefix[u-1]=" << sum_val << "\n";
    }
}

int32_t main(void){
    ios_base::sync_with_stdio(0);cout.tie(0);cin.tie(0);
    sangnguyento();
    cin >> n >> m;
    prefix[0] = 0;
    FOR(i, 1, n){
        cin >> a[i];
        prefix[i]=prefix[i-1]+a[i];
        //cout << "prefix " << i << "=" << prefix[i] << "\n";
    }
    solve();
}