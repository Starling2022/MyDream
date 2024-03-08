#include <bits/stdc++.h>
#define int long long
using namespace std;
//htrang is the best
int n;
main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cin>>n;
    int A[n];
    int k = n;
    for (int i=1; i<=n;i++)
        cin >> A[i];
    while(k>0){
        cout << A[k] << " ";
        k--;
    }
}