#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, i;

main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n;
    int A[n+3];
    for (i=1; i<= n; i++)
        cin >> A[i];
    for (i=1;i<n;i++)
        if (A[i]>0 && A[i+1]>0 || A[i]<0 && A[i+1]<0){
            cout << A[i] << " " << A[i+1];
            return 0;
        }
    return 0;
}