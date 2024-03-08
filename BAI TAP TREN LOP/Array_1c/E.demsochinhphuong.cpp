#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, i, s=0;

main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("socp.inp", "r", stdin)
    //freopen("socp.out", "w", stdout)
    cin >> n;
    int A[n+3];
    for(i=1; i<= n; i++)
        cin >> A[i];
    for (i=1; i<=n; i++)
        if (sqrt(A[i])==round(sqrt(A[i])))
            s++;
    cout << s;
}