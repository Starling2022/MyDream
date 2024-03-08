//https://codeforces.com/gym/429033/problem/J
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, i, s=0;

main(){
    //freopen("bo2so.inp", "r", stdin);
    //freopen("bo2so.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    int A[n+3];
    for(i=1; i<= n; i++)
        cin >> A[i];
    for(i=1; i<n; i++)
        if((A[i]+A[i+1])/2.0 > sqrt(A[i]*A[i+1]*1.0))
            s++;
    cout << s;
}