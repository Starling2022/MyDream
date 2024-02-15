#include <bits/stdc++.h>
#define int long long
using namespace std;

int n, i, res;
main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    int a[n+3];
    for(i = 1; i<= n; i++)
        cin >> a[i];
    sort(a+1, a+n+1, greater<int>());
    for(i=1; i<n; i++){
        if(i==1)    res = a[i]-a[i+1];
        if (a[i]-a[i+1]<res)    res= a[i]-a[i+1];
        //cout << res<< endl;
    }
    cout << res;
}