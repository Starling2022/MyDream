#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#define FOR(i, a, b) for(int (i)=(a); (i)<= (b); ++(i))
#define FOD(i, a, b) for(int i=(a); i>=(b); --i)
#define FAST ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int max_value=1000006;
string s, res;

main() {
    FAST;
    getline(cin, s);
    FOR(i, 0, s.length() - 1) {
        char val = s[i];
        if (('a' <= val && val <= 'z') || ('A' <= val && val <= 'Z')) {
            res += val;
        }
    }
    cout << res << '\n';
}
