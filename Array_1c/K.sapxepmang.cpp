#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, i;
main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("sort_array.inp","r",stdin);
    //freopen("sort_array.inp", "w", stdout);
    cin >> n;
    int A[n];
    for (i = 1; i <= n; i++)
        cin >> A[i];
    sort(A+1, A+n+1);
    for (i = 1; i <= n; i++)
        cout << A[i] << " ";
    return 0;
}