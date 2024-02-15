#include <bits/stdc++.h>
using namespace std;
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")
#define FOR(i, a, b) for(int (i)=(a); (i)<= (b); ++(i))
#define FOD(i, a, b) for(int i=(a); i>=(b); --i)
#define FAST ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
const int max_value=1000006;

int n, key;
int a[max_value];

main(){
    FAST;
    cin >> n >> key;
    FOR(i, 1, n)    cin >> a[i];
    int i=1, j=n;
    while(i<=j){
        if(a[i]+a[j]>key)   --j;
        if(a[i]+a[j]<key)   ++i;
        if(a[i]+a[j]==key){
            cout << i << " " << j;
            return 0;
        }
    }  

    cout << "No solution";
}