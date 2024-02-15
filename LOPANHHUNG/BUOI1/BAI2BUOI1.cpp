#include <bits/stdc++.h>
using namespace std;
#define int long long
#define ll unsigned long long
#define FOR(i, a, b) for(int i=(a); i<=(b); ++i)
const int max_value=1e7;

int max(int a, int b){
    if (a > b)  return a;
    return b;
}

void sangnguyento(int l, int r){
    vector<int> prime(r-l+1, 1);
    if (l == 1) prime[0] = 0;
    FOR(i, 2, sqrt(r)){
        for(int j=max(i*i, (l+i-1)/i*i); j<=r; j+=i){
            if (j >= l)
                prime[j-l]=0;
        }
    }
    FOR(i, l, r)
        if(prime[i-l])
            cout << i << "\n";
}

 main(){
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int l, r;
    cin >> l >> r;
    sangnguyento(l, r);
    return 0;
}
