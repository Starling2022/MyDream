#include <bits/stdc++.h>
using namespace std;
//#pragma GCC optimize("O3,unroll-loops")
//#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#define FOR(i, a, b) for(int i=(a); i<= (b); ++i)
#define FOD(i, a, b) for(int i=(a); i>=(b); --i)
#define FAST ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define MOD 1000000007
int x, y, cnt;
int32_t main(){
    FAST;
    freopen("CAU1.INP","r",stdin); freopen("CAU1.OUT","w",stdout);
    cin >> x >> y;
    int value=gcd(x, y);
    FOR(i, 1, sqrt(value))
        if(value%i==0){
            ++cnt;
            if(i != value/i)
                ++cnt;
        }
            
    cout << cnt << endl;
    return 0;
}
