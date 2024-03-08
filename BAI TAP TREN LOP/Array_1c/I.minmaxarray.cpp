/*
Cho số nguyên n và dãy số nguyên a1, a2, ..., an
Yêu cầu: Hãy tìm giá trị nhỏ nhất, giá trị lớn nhất, 
số lượng phần tử có giá trị nhỏ nhất, số lượng phần tử có giá trị lớn nhất
Sắp xếp toàn bộ mảng a có n phần tử: sort(a, a + n);
Sắp xếp mảng a từ chỉ số x tới chỉ số y: sort(a + x, a + y + 1);
Sắp xếp mảng giảm dần: sort(a, a + n, greater<data_type>());

*/
#include <bits/stdc++.h>
#define int long long
using namespace std;
int n, i, mn, mx, smn, smx;

main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    //freopen("minmax.inp", "r", stdin)
    //freopen("minmax.out", "w", stdout)
    cin >> n;
    int A[n+3];
    for(i=1; i<=n; i++)
        cin >> A[i];
    sort(A+1, A+n+1);
    mn = A[1];
    mx = A[n];
    for(i=1; i<=n; i++){
        if(A[i]==mx)
            smx++;
        if(A[i]==mn)
            smn++;
    }
    cout << mn << " " << smn << endl << mx << " " << smx;
}