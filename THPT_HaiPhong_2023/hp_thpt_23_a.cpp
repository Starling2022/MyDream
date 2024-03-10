#include <bits/stdc++.h>
#define int long long
#define FOR(i, a, b) for(int i=(a); i<=(b);++i)
#define FOD(i, a, b) for(int i=(a); i>=(b);--i)
#define REP(n) for(int i=0; i<=(n);++i)
#define FAST ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
//#define int long long
using namespace std;
const int max_value=100006;

int n, cnt;

int32_t main(){
    cin >> n;
    FOR(i, 1, sqrt(n)){
        if(n%i==0){
            ++cnt;
            if(n/i!=i)  ++cnt;
        }
    }
    cout << cnt;
}
