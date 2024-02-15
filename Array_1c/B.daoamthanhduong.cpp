#include <bits/stdc++.h>
#define int long long
using namespace std;
//Htrang is the best:3
int n, i;
main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    int A[n];
    for (i = 1; i <= n; i++){
        cin >> A[i];
    }
    for (i = 1; i <= n; i++){
        if(A[i]<0){
            A[i] = -A[i];
        }
        cout << A[i] << " ";
    }
}