#include <bits/stdc++.h>
#define int long long
#define float long double
using namespace std;
int n, i, rmax;
main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    int a[n+3];
    for (i=1; i<=n; i++){
        cin >> a[i];
        if(a[i]>rmax)
            rmax = a[i];
    }
    for (i = 1; i <= n; i++){
        if (a[i] != rmax)
            cout << a[i] << " ";
    }
}