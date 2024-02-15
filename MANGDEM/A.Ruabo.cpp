#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i=(a); i<=(b); ++i)
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
const int max_value=1e6;
//KHAI BAO BIEN SU DUNG
int a[max_value];
int cnt[max_value];
int n, q;
 
int main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    FOR(i, 1, n){
        cin >> a[i];
        cnt[a[i]]++;
    }
    cin >> q;
    FOR(i, 1, q){
        int k; cin >> k;
        cout << cnt[k] << "\n";
    }
}