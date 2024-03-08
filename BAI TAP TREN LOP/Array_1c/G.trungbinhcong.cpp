// Tính trung bình cộng các số lẻ ở vị trí chẵn, nếu không có in NO
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, i, s, s1;
main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("tbc.inp", "r", stdin)
    //freopen("tbc.out", "w", stdout)
    cin >> n;
    int A[n+3];
    for (i = 1; i <= n; i++)
        cin >> A[i];
    for (i = 2; i <= n; i+=2){
        if (A[i] % 2 != 0){
            s+= A[i];
            s1++;
            //cout << "s:"  << s << endl << "s1:" << s1 << endl;
        }
    }
    if (s1 == 0){
        cout << "NO";
        return 0;
    }
    else{
        cout << fixed << setprecision(5) << s /(double)s1;
    }
}