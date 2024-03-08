#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#define FOR(i, a, b) for(int i=(a); i<= (b); ++i)
#define FOD(i, a, b) for(int i=(a); i>=(b); --i)
const int max_value=1000006;
#define int long long

int n, maxvl, res;
int a[max_value];
int cnt[max_value];

 main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    FOR(i, 1, n){
        cin >> a[i];
        cnt[a[i]]++;
        if(res < cnt[a[i]]) res = cnt[a[i]];
    }
    FOR(i, 1, n)
        if(res==cnt[i])    ++maxvl;
    cout << res << " " << maxvl;
}