#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, i, s;
main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    int A[n]={};
    for (i=1;i<=n;i++)
        cin >> A[i];
    for (i=2;i<n;i++){
        if (A[i]>A[i-1] && A[i]>A[i+1]){
            s++;
        }
    }
    cout << s;
}