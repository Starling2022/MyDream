#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#define FOR(i, a, b) for(int i=(a); i<= (b); ++i)
#define FOD(i, a, b) for(int i=(a); i>=(b); --i)
#define FAST ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long

int n, a[10000007], suffix[10000007];
int32_t main()
{
    FAST;
    cin >> n;
    FOR(i, 1, n) cin >> a[i];
    suffix[n+1]=0;
    int ans=-1;
    FOD(i, n, 1) suffix[i]=max(suffix[i+1], a[i]);
    FOR(i, 1, n-2)
        FOR(j, i+1,n-1)
            if(a[i]<a[j] && a[j]<suffix[j+1])
                ans=max(ans, a[i]+a[j]+suffix[j+1]);
    cout << ans;
}