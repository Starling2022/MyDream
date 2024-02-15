//khai bao cau truc
#include <bits/stdc++.h>
#define int long long
using namespace std;
#define FOR(i, a, b) for(int i=(a); i<=(b); ++i)
//khai bao bien
const int max_value=1e7;
int prime[max_value+1];
int n, k;
int a[max_value];

void sangnguyento(){
    FOR(i, 1, max_value)    prime[i] = 1;
    prime[1]=0;
    FOR(i, 2, sqrt(max_value))
        if(prime[i]==1)
            for(int j = i*i; j <= max_value; j+=i)
                prime[j]=0;
}


main()
{
    ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    sangnguyento();
    cin >> k;
    FOR(i, 1, k){
        cin >> n;
        if(prime[n]==1){
            cout << "YES \n";
        }
        if(prime[n]==0){
            cout << "NO \n";
        }
    }
    return 0;
}