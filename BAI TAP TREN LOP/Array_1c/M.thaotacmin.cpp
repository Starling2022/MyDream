//https://codeforces.com/gym/429033/problem/M
#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, x, y, s;
main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> x;
    int a[n+5];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    sort(a+1, a+n+1);
    y=n;
    while(x>0){
        x = x-a[y];
        y--;
        s++;
        if(y==0){
            cout << "-1";
            return 0;
        }
    }
    cout << s;
    return 0;
}