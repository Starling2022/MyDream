/*KHAI BAO CAU TRUC CHUONG TRINH*/
#include <bits/stdc++.h>
using namespace std;
#define FOR(i, a, b) for(int i=(a); i<=(b); ++i)
#define int long long
const int max_value = 1e7;
//Khai bao bien su dung
int a, b, sum;

int tongi(int x){
    int sumx=0;
    FOR(i, 1, x-1)
        if(x%i==0)
            sumx+=i;
    return sumx;
}

int perfect(int i){
    int sumx=tongi(i);
    return abs(sumx-i);
}

main(){
    ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
    cin >> a >> b;
    FOR(i, a, b)
        sum+=perfect(i);
    cout << sum;
    return 0;
}
