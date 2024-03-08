#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, i, sum;
long double req, res;

main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    int a[n];
    for (i=1; i<=n; i++){
        cin >> a[i];
        sum+=a[i];
    }
    sort(a+1, a+1+n);
    req=a[1];
    for(i=1; i<n; i++)
        req=(req+a[i+1])/2;
    res =req*n-sum;
    cout<< setprecision(5) << fixed <<res;
}