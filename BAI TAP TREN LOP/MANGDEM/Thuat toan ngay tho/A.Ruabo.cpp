#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i=(a); i<=(b); ++i)
#define FOD(i, a, b) for(int i=(a); i=>(b); --i)
#define int long long
#define ull unsigned long long
const int max_value=1e7;
//KHAI BAO BIEN SU DUNG
int a[max_value];
int check[max_value];
int res[max_value];
int n, q;

main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    FOR(i, 1, n)    cin >> a[i];
    cin >> q;
    FOR(i, 1, q)    cin >> check[i];
    FOR(i, 1, n)
        FOR(j, 1, q)
            if(a[i]==check[j])
                ++res[j];
    FOR(i, 1, q)    cout << res[i] << "\n";


}