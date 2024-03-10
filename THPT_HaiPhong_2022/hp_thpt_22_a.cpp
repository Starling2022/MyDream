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
    string s;
    string z="";
    cin >> s;
    FOR(i, 0, 4)    z=z+s[i];
    FOR(i, 5, s.length()){
        if(z=="virus")
            cnt++;
        z.erase(0,1);
        z+=s[i];
    }
    cout << cnt;
}
