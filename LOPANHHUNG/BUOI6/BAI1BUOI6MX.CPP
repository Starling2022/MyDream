#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#define FOR(i, a, b) for(int i = (a); i <= (b); ++i)
#define FAST ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
int a, b, M;

// Phep toan nhan voi mod M
int modM(int a, int b){
    if(b == 0)  return 0;
    int res = modM(a, b / 2);
    res=(res+res)%M;
    if(b%2) res=(res+a)%M;
    return res;
}

// Bieu dien ma tran 2x2
struct matran
{
    int value[3][3];
    matran(){
        memset(value, 0, sizeof value);
    }

    //Nhan ma tran
    matran operator * (const matran &other) const {
        matran res;
        FOR(i, 1, 2)
            FOR(j, 1, 2)
                FOR(k, 1, 2)
                    res.value[i][j] = (res.value[i][j] + modM(value[i][k], other.value[k][j])) % M;
        return res;
    }

    // Phep luy thua ma tran
    matran operator ^ (const int &k)  const {
        matran a = *this;
        if(k==1)    return a;
        matran res = a ^ (k / 2);
        res = res * res;
        if(k%2) res = res * a;
        return res;
    }
};

// Tinh so fib
int fibo(int k){
    if(k<=1)    return 1 % M;

    matran a;
    a.value[1][1] = 1, a.value[1][2] = 1;
    a.value[2][1] = 1, a.value[2][2] = 0;
    a = a ^ (k-1);

    return a.value[1][1];
}

int32_t main(){
    FAST;
    cin >> a >> b >> M;
    cout << fibo(__gcd(a, b)) << "\n";
    return 0;
}
