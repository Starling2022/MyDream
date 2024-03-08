#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#define FOR(i, a, b) for(int i=(a); i<= (b); ++i)
#define FOD(i, a, b) for(int i=(a); i>=(b); --i)
const int max_value=1000006;
int cnt[10];
int a[max_value];
int n, res;
int main(){
    ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> n;
    FOR(i, 1, n){
        cin >> a[i];
        while(a[i]>0){
            res=a[i]%10;
            cnt[res]++;
            a[i]/=10;
        }
    }
    FOR(i, 0, 9) cout << cnt[i] << " ";
}
