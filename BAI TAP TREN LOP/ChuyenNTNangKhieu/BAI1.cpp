#include <bits/stdc++.h>
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#define FAST ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
#define MOD 1000000007
#define FOR(i, a, b) for(int i=(a); i <=(b); ++i)
#define FOD(i, a, b) for(int i=(a); i >= (b); --i)
using namespace std;


int n, sum1=0, sum2=0;

int32_t main(){
    cin >> n;
    int y=n, a[n];
    FOR(i, 1, n)    cin >> a[i];
    sort(a+1, a+1+n);
    int x = 1;
    while(x<y){
        sum1+=a[x];
        sum2+=a[y];
        x++; y--;
    }
    if(n%2!=0)  sum2+=a[n/2+1];
    cout << abs(sum1-sum2) << "\n";
    return 0;
}