#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#define FOR(i, a, b) for(int i = (a); i <= (b); ++i)
#define FAST ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long

main(){
    cin >> n;
    FOR(i, 1, n)    cin >> b[i];
    FOR(i, 1, n)    cin >> c[i];
    sort(b+1, b+1+n);
    sort(c+1, c+1+n);
    
}