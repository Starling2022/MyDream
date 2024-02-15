#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, i, res=1;
main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    int a[n+5];
    for (i = 1; i <= n; i++)
        cin >> a[i];
    sort(a+1, a+n+1);
    for(i=1; i<=n; i++)
        if (res==a[i])
            res++;
    cout << res;
}