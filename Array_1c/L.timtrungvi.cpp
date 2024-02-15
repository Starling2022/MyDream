#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, i, x, y;

main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("trungvi.inp", "r", stdin);
    //freopen("trungvi.out", "w", stdout);
    cin >> n;
    int A[n+3];
    for(i=1; i<= n; i++)
        cin >> A[i];
    sort(A+1, A+n+1);
    if(n%2==0){
        x = n/2;
        y= x+1;
        cout << float((A[x]+A[y]))/2;
    }else{
        cout<< A[n/2+1];
    }
}