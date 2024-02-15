#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#define FOR(i, a, b) for(int i = (a); i <= (b); ++i)
#define FAST ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define int long long
int a, b, M;

int modM (int a, int b){
    if(b == 0)  return 0;
    int res = modM(a, b / 2);
    res=(res+res)%M;
    if(b%2) res=(res+a)%M;
    return res;
}

struct  matran
{
    int val[3][3];
    matran(){
        memset(val, 0, sizeof val);
    }

    matran operator * (const matran &other) const {
        matran res;
        for(int i=1; i <=2; i++){
            for(int j=1; j <= 2; j++){
                for(int k=1; k<=2; k++){
                    res.val[i][j] = (res.val[i][j] + modM(val[i][k], other.val[k][j])) % M;
                }
            }
        }
        return res;
    }

    matran operator ^ (const int &k)  const {
        matran a = *this;
        if(k==1)    return a;
        matran res = a ^ (k / 2);
        res = res * res;
        if(k%2) res = res * a;

        return res;
    }
};


int fib(int k){
    if(k<=1)    return 1 % M;

    matran a;
    a.val[1][1] = 1, a.val[1][2] = 1;
    a.val[2][1] = 1, a.val[2][2] = 0;
    a = a ^ (k-1);

    return a.val[1][1];
}

int32_t main(){
    cin >> a >> b >> M;
    //M=1000;
// FOR(i, 1, 10){
//     cout << fib(i) << "\n";
// }
    cout << fib(__gcd(a, b)) << "\n";
    return 0;
}