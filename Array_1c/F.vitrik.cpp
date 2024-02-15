#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, k, s, i;

main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    int A[n+3];
    for (i=1;i<=n;i++)
        cin >> A[i];
    cin >> k;
    for(i = 1; i <= n; i++){
        if (A[i]==k){
            cout << i << " ";
            s++;
        }
    }
    if(s==0)
        cout << "-1";
}