//Cho mảng a gồm n phần tử, hãy tìm vị trí các số nhỏ nhất trong mảng và in chúng ra theo thứ tự từ bé tới lớn.
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, i, req;

main(){
    //freopen("vitrimin.inp", "r", "stdin");
    //freopen("vitrimin.out", "w", stdout);
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin >> n;
    int A[n];
    for (i = 1; i<=n;i++){
        cin >> A[i];
        if(i==1)
            req=A[i];
        else if(A[i]<req)
            req=A[i];
    }
    for(i=1; i<=n; i++){
        if(A[i]==req)
            cout << i << " ";
    }
}